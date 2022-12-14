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
#include "./Form.hpp"

class Form;

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const&);
		~ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const&);

		void	execute(Bureaucrat const & executor) const;
	private:

};

#endif