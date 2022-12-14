/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:40:17 by stissera          #+#    #+#             */
/*   Updated: 2022/12/14 22:18:31 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "./Form.hpp"
#include "./ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("NONAME", 72, 45), _target("NONAME")
{
	std::cout << "Shrubbery constructor with NONAME called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& name) : Form(name, 72, 45), _target(name)
{
	std::cout << "Shrubbery constructor  " << name << " called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& cpy) : Form(cpy.getName(), cpy.getSignGrade(), cpy.getExecGrade()), _target(cpy._target)
{
	std::cout << "Shrubbery copy constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery destructor " << this->getName() << " called." << std::endl;
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& cpy)
{
	_target = cpy.getTarget();
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	std::ofstream	file;
	file.open(this->_target + "__shrubbery", std::ofstream::out | std::ofstream::app);
	file << "     ccee88oo\n";
	file << "  C8O8O8Q8PoOb o8oo\n";
	file << " dOB69QO8PdUOpugoO9bD\n";
	file << "CgggbU8OU qOp qOdoUOdcb\n";
	file << "    6OuU  /p u gcoUodpP\n";
	file << "      \\\\//  /douUP\n";
	file << "        \\\\////\n";
	file << "         |||/\\\n";
	file << "         |||\\/\n";
	file << "         |||||\n";
	file << "   .....//||||\\...." << this->_target << '\n';
	file.close();
}

const char*	ShrubberyCreationForm::GradeTooLowException::what() const throw()
{
	return ("Fordidden to execute the task, grade too low.");
}

