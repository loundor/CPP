/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 00:29:26 by stissera          #+#    #+#             */
/*   Updated: 2022/12/14 00:29:26 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "./Bureaucrat.hpp"
#include "./Form.hpp"

//class Form;

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const&);
		ShrubberyCreationForm(ShrubberyCreationForm const&);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &);
		~ShrubberyCreationForm();
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};
		std::string	getTarget() const;
		void		execute(Bureaucrat const & executor) const;

	private:
		std::string	_target;
};

#endif