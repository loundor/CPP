/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 01:17:32 by stissera          #+#    #+#             */
/*   Updated: 2022/12/10 01:17:32 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

#define MAX_GRADE 1
#define MIN_GRADE 150

#include "Form.hpp"
class Form;

class Bureaucrat
{
	public:
		class GradeTooHighException : public std::exception
		{
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
				const char* what() const throw();
		};
		class NoSignException : public std::exception
		{
			const char* what() const throw();
		};
		Bureaucrat();
		Bureaucrat(Bureaucrat const&);
		Bureaucrat(std::string const&);
		Bureaucrat(std::string const&, int const);
		Bureaucrat(std::string const&, int const, int const);
		Bureaucrat& operator=(Bureaucrat const&);
		~Bureaucrat();
		std::string getName() const;
		int			getGrade() const;
		void		UpGrade(int);
		void		DownGrade(int);
		void		signForm(Form&);
		void		executeForm(Form const & form);

	private:
		std::string	const	_name;
		int					_grade;
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const& cpy);

#endif