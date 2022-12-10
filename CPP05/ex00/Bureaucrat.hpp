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

#define MAX_GRADE 1;
#define MIN_GRADE 150;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const&);
		Bureaucrat(std::string const&);
		Bureaucrat(std::string const&, int const);
		Bureaucrat& operator=(Bureaucrat const&);
		~Bureaucrat();
		std::string getName() const;
		int			getGrade() const;
		void		GradeTooHighException(); // Exception???
		void		GradeTooLowException(); // Exception???!
		void		UpGrade();
		void		DownGrade();

	private:
		std::string	const	_name;
		int					_grade;
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const& cpy);

#endif