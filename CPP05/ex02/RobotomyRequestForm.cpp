/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 22:12:54 by stissera          #+#    #+#             */
/*   Updated: 2022/12/14 22:39:58 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "./Form.hpp"
#include "./RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("NONAME", 145, 137), _target("NONAME")
{
	this->_fail = false;
	std::cout << "Shrubbery constructor with NONAME called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const& name) : Form(name, 145, 137), _target(name)
{
	this->_fail = false;
	std::cout << "Shrubbery constructor  " << name << " called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& cpy) : Form(cpy.getName(), cpy.getSignGrade(), cpy.getExecGrade()), _target(cpy._target)
{
	this->_fail = cpy._fail;
	std::cout << "Shrubbery copy constructor called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Shrubbery destructor " << this->getName() << " called." << std::endl;
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& cpy)
{
	_target = cpy.getTarget();
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	try
	{
		if (_fail)
			throw FailRobotoException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return ;
	}
	std::cout << this->_target << " was correctly robotomise!" << std::endl;
}

const char*	RobotomyRequestForm::GradeTooLowException::what() const throw()
{
	return ("Fordidden to execute the task, grade too low.");
}

const char*	RobotomyRequestForm::FailRobotoException::what() const throw()
{
	return ("Roboto transform failed!");
}

void	RobotomyRequestForm::beExecute()
{
	~_fail;
}