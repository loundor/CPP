/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:09:56 by stissera          #+#    #+#             */
/*   Updated: 2022/12/16 10:38:17 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor without name called." << std::endl;
}

Intern::Intern(Intern const& cpy)
{
	std::cout << "Intern constructor by copy called." << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called." << std::endl;
}

Intern&	Intern::operator=(Intern const& cpy)
{
	std::cout << "Bureaucrat operator = called." << std::endl;
	return (*this);
}

Form*	Intern::shruberryForm(std::string const& name)
{
	Form *ret = new ShrubberyCreationForm(name);
	return (ret);
}

Form*	Intern::robotoForm(std::string const& name)
{
	Form *ret = new RobotomyRequestForm(name);
	return (ret);
}

Form*	Intern::presidentialForm(std::string const& name)
{
	Form *ret = new PresidentialPardonForm(name);
	return (ret);
}

Form*	Intern::makeForm(std::string const& type, std::string const& name)
{
	std::string _type[3] = {	"schruberry creation",
								"robotomy request",
								"presidential pardon"};

	Form*	(*ptr[])(std::string const&) = {&shruberryForm,
											&robotoForm,
											&presidentialForm};
	for (int i = 0; i < 3; i++)
	{
		if (type.compare(_type[i]))
		{
			std::cout << "Intern creates " << type << " named " << name << std::endl;
			return (ptr[i])(name);
		}
	}
	std::cout << "Asked form don't exist!" << std::endl;	
	return (NULL);
}