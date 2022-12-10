/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 01:18:16 by stissera          #+#    #+#             */
/*   Updated: 2022/12/10 01:18:16 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(Bureaucrat const& cpy)
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string const& name) : _name(name)
{
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(std::string const& name, int const grade) : _name(name), _grade(grade)
{}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& cpy)
{
	return (*this);
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const& cpy)
{
	os << cpy.getName() << ", bureaucrat grade " << cpy.getGrade() << ".";
	return (os);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int			Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::UpGrade()
{
	this->_grade--;
}

void	Bureaucrat::DownGrade()
{
	this->_grade++;
}

