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

int	main( void )
{
	Bureaucrat man1("Thierry", 80);
	Bureaucrat man2(man1);
	Bureaucrat man3("Pascal");
	
	std::cout << "n1: " << man1.getName() << " Level : " << man1.getGrade() << std::endl;
	std::cout << "n2: " << man2.getName() << " Level : " << man2.getGrade() << std::endl;
	std::cout << "n3: " << man3.getName() << " Level : " << man3.getGrade() << std::endl;
	man3 = man1;
	std::cout << "n3: " << man3.getName() << " Level : " << man3.getGrade() << std::endl;
	man1.UpGrade(10);
	man1.UpGrade(10);
	man1.UpGrade(59);
	man1.UpGrade(10);
	std::cout << "n1: " << man1.getName() << " Level : " << man1.getGrade() << std::endl;
	man1.DownGrade(139);
	man1.DownGrade(10);
	man1.DownGrade(10);
	man1.DownGrade(100);
	std::cout << "n1: " << man1.getName() << " Level : " << man1.getGrade() << std::endl;
	return (0);
}