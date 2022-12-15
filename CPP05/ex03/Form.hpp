/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:54:58 by stissera          #+#    #+#             */
/*   Updated: 2022/12/12 21:54:58 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_signGrade;
		int const			_execGrade;

	public:
		Form(std::string const&, int const, int const);
		Form(Form const&);
		virtual ~Form();
		virtual Form& operator=(Form const&);
		class GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};
		class AllReadySigned : public std::exception
		{
			const char* what() const throw();
		};
		void 				beSigned(Bureaucrat const&);
		std::string			getName() const;
		bool				getSign() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		virtual void		execute(Bureaucrat const & executor) const = 0;
		virtual std::string	getTarget() const = 0;
};

std::ostream& operator<<(std::ostream& os, Form const& form);

#endif