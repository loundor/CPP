/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:08:24 by stissera          #+#    #+#             */
/*   Updated: 2022/12/16 11:14:29 by stissera         ###   ########.fr       */
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
	~Intern();
	Intern& operator=(Intern const&);
	Form* makeForm(std::string const&, std::string const&);

	private:
		static Form*	shruberryForm(std::string const&);
		static Form*	robotoForm(std::string const&);
		static Form*	presidentialForm(std::string const&);
};

#endif