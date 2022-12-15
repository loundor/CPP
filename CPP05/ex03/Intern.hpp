/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:08:24 by stissera          #+#    #+#             */
/*   Updated: 2022/12/15 17:45:45 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "./Bureaucrat.hpp"
#include "./Form.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./PresidentialPardonForm.hpp"

//class Form;

class Intern
{
	public:
	Intern();
	Intern(Intern const&);
	Intern(std::string const&);
	Intern& operator=(Intern const&);
	Form* makeForm(std::string const&, std::string const&);

	private:
		Form*	shruberryForm(std::string const&);
		Form*	robotoForm(std::string const&);
		Form*	presidentialForm(std::string const&);
};

#endif