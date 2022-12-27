/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 01:43:06 by stissera          #+#    #+#             */
/*   Updated: 2022/12/10 01:43:06 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"
#include "./Form.hpp"

int	main( void )
{
	std::cout << "-------- CREATE BUREAUCRATS -------" << std::endl;
	Bureaucrat man1("Thierry", 80);
	Bureaucrat man2("Lucie", 20);
	Bureaucrat man3("Marie", 147);
	
	std::cout << "n1: " << man1.getName() << " Level : " << man1.getGrade() << std::endl;
	std::cout << "n2: " << man2.getName() << " Level : " << man2.getGrade() << std::endl;
	std::cout << "n3: " << man3.getName() << " Level : " << man3.getGrade() << std::endl;

	std::cout << "-------- CREATE FORMS -------" << std::endl;
	Form nbr1("ENGAGE", 120, 120);
	Form nbr2("SUSPEND", 50, 150);
	Form nbr3("FIRE", 5, 150);
	Form *nbr4;
	try
	{
		nbr4 = new Form("BAD", 151, 150);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
		nbr4 = NULL;
	}

	std::cout << "------ OPERATOR FORM -------" << std::endl;
	std::cout << nbr1 << std::endl;
	std::cout << nbr2 << std::endl;
	std::cout << nbr3 << std::endl;
	std::cout << nbr4 << std::endl;

	std::cout << "-------- SIGN FORM -------" << std::endl;
	man1.signForm(nbr1);
	man1.signForm(nbr2);
	man1.signForm(nbr3);
	std::cout << "---------------" << std::endl;
	man2.signForm(nbr1);
	man2.signForm(nbr2);
	man2.signForm(nbr3);
	std::cout << "---------------" << std::endl;
	man3.signForm(nbr1);
	man3.signForm(nbr2);
	man3.signForm(nbr3);

	std::cout << "------ INFO FORM -------" << std::endl;
	std::cout << nbr1 << std::endl;
	std::cout << nbr2 << std::endl;
	std::cout << nbr3 << std::endl;

	std::cout << "-------- OPERATOR << -------" << std::endl;
	std::cout << man1 << std::endl;
	std::cout << man2 << std::endl;
	std::cout << man3 << std::endl;
	std::cout << "----------------------------" << std::endl;

	return (0);
}