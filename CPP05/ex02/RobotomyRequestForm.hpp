/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 22:11:59 by stissera          #+#    #+#             */
/*   Updated: 2022/12/15 13:24:19 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUEST_HPP
#define ROBOTOMYREQUEST_HPP
#include "./Bureaucrat.hpp"
#include "./Form.hpp"

//class Form;

class Bureaucrat;

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const&);
		RobotomyRequestForm(RobotomyRequestForm const&);
		RobotomyRequestForm& operator=(RobotomyRequestForm const &);
		~RobotomyRequestForm();
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};
		class FailRobotoException : public std::exception
		{
			const char* what() const throw();
		};
		std::string	getTarget() const;
		void		execute(Bureaucrat const & executor) const;
		
	private:
		std::string	_target;
};

#endif