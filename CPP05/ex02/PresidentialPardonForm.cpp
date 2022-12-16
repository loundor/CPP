/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:22:31 by stissera          #+#    #+#             */
/*   Updated: 2022/12/16 11:24:46 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <ctime>
#include "./Form.hpp"
#include "./PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("NONAME", 25, 5), _target("NONAME")
{
	std::cout << "PresidentialPardonForm constructor with NONAME called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const& name) : Form(name, 25, 5), _target(name)
{
	std::cout << "PresidentialPardonForm constructor  " << name << " called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& cpy) : Form(cpy.getName(), cpy.getSignGrade(), cpy.getExecGrade()), _target(cpy._target)
{
	std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor " << this->getName() << " called." << std::endl;
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& cpy)
{
	_target = cpy.getTarget();
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	std::cout << this->_target << " was excused by Zaphod Beeblebrox!!!" << std::endl;
}

const char*	PresidentialPardonForm::GradeTooLowException::what() const throw()
{
	return ("Fordidden to execute the task, grade too low.");
}
