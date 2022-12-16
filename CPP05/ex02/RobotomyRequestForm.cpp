/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 22:12:54 by stissera          #+#    #+#             */
/*   Updated: 2022/12/16 11:24:30 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <ctime>
#include "./Form.hpp"
#include "./RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("NONAME", 72, 45), _target("NONAME")
{
	std::cout << "RobotomyRequestForm constructor with NONAME called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const& name) : Form(name, 72, 45), _target(name)
{
	std::cout << "RobotomyRequestForm constructor  " << name << " called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& cpy) : Form(cpy.getName(), cpy.getSignGrade(), cpy.getExecGrade()), _target(cpy._target)
{
	std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor " << this->getName() << " called." << std::endl;
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
	std::cout << "Brrrzzzzz. noize driller" << std::endl;
	std::time_t	fail = std::time(nullptr);
	try
	{
		if (fail % 2)
			throw FailRobotoException();
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_target << e.what() << '\n';
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
	return (" robotomise transform failed!");
}
