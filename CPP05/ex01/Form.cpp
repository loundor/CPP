/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 00:32:22 by stissera          #+#    #+#             */
/*   Updated: 2022/12/13 00:32:22 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Form.hpp"

Form::Form(std::string const& name, int const signGrade, int const execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(false)
{
	if ((this->getSignGrade() > MIN_GRADE) || (this->getExecGrade() > MIN_GRADE))
		throw Form::GradeTooLowException();
	if ((this->getSignGrade() < MAX_GRADE) || (this->getExecGrade() < MAX_GRADE))
		throw Form::GradeTooLowException();
	std::cout << "Constructor Form with named " << name << " and signGrade " << signGrade << " and execGrade " << execGrade << " called." << std::endl;
}

Form::Form(Form const& cpy) : _name(cpy._name), _signGrade(cpy._signGrade), _execGrade(cpy._execGrade), _signed(cpy._signed)
{
	std::cout << "Constuctor by copy called for " << cpy._name << std::endl;
}

Form::~Form()
{
	std::cout << "Destructor Form " << this->getName() << " called." << std::endl;
}

Form& Form::operator=(Form const& cpy)
{
	std::cout << "Operator = for Form called" << std::endl;
	return (*this);
}

void	Form::beSigned(Bureaucrat const& other)
{
	try
	{
		if (getSign())
			throw Form::AllReadySigned();
		if (other.getGrade() > this->getSignGrade())
			throw Form::GradeTooLowException();
		_signed = true;
		std::cout << other.getName() << " signed " << this->getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << other.getName() << " couldn’t sign " << this->getName() << " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, Form const& form)
{
	os << "Form: " << form.getName() << " is ";
	if (form.getSign())
		os << "signed.";
	else
	{
		os << "not signed and need to sign grade " << form.getSignGrade();
	}
	return (os);
}

const char* Form::GradeTooHighException::what() const throw() {return ("Grade too high to sign...");}

const char* Form::GradeTooLowException::what() const throw() {return ("Grade too low to sign");}

const char* Form::AllReadySigned::what() const throw() {return ("Form already signed");}

std::string	Form::getName() const {return (this->_name);}

bool		Form::getSign() const {return (this->_signed);}

int			Form::getSignGrade() const {return (this->_signGrade);}

int			Form::getExecGrade() const {return (this->_execGrade);}