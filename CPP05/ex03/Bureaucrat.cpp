/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 01:18:16 by stissera          #+#    #+#             */
/*   Updated: 2022/12/10 01:18:16 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat constructor without name called." << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const& cpy) : _name(cpy.getName()), _grade(cpy.getGrade())
{
	std::cout << "Bureaucrat constructor by copy called." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string const& name) : _name(name), _grade(150)
{
	std::cout << "Bureaucrat constructor named " << name << " called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string const& name, int const grade) : _name(name), _grade(grade)
{
	if (grade > 150)
	{
		_grade = 150;
		throw Bureaucrat::GradeTooLowException();
	}
	if (grade < 1)
	{
		_grade = 1;
		throw Bureaucrat::GradeTooHighException();
	}
	std::cout << "Bureaucrat constructor named " << name << " with grade " << grade << " called." << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& cpy)
{
	std::cout << "Bureaucrat operator = called." << std::endl;
	this->_grade = cpy.getGrade();
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int			Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::UpGrade(int up)
{
	try
	{
		if (this->getGrade() - up < 1)
			throw Bureaucrat::GradeTooHighException();
		this->_grade -= up;
		std::cout << this->getName() << " have a grade of " << this->getGrade() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::DownGrade(int down)
{
	try
	{
		if (this->getGrade() + down > 150)
			throw Bureaucrat::GradeTooLowException();
		this->_grade += down;
		std::cout << this->getName() << " have a grade of " << this->getGrade() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const& cpy)
{
	os << cpy.getName() << ", bureaucrat grade " << cpy.getGrade() << ".";
	return (os);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char*	Bureaucrat::NoSignException::what() const throw()
{
	return ("Form isn't signed!");
}

void	Bureaucrat::signForm(Form& form)
{
		form.beSigned(*this);
}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		if (!form.getSign())
			throw NoSignException();
		if (this->getGrade() > form.getExecGrade())
			throw GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << " " << this->getName() << " can't execute the form." << std::endl;
		return ;
	}
	form.execute(*this);
	std::cout << this->getName() << " executed " << form.getName() << std::endl;
 }