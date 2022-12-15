/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:21:40 by stissera          #+#    #+#             */
/*   Updated: 2022/12/15 13:24:16 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "./Bureaucrat.hpp"
#include "./Form.hpp"

//class Form;

class Bureaucrat;

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const&);
		PresidentialPardonForm(PresidentialPardonForm const&);
		PresidentialPardonForm& operator=(PresidentialPardonForm const &);
		~PresidentialPardonForm();
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