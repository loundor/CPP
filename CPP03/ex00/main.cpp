/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:32:14 by stissera          #+#    #+#             */
/*   Updated: 2022/12/05 23:29:39 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include "./ClapTrap.hpp"

int main()
{
	ClapTrap c1("c1");
	ClapTrap c2(c1);
	ClapTrap c3;
	c3 = c2;
 
  std::cout << "---------------------------------" << std::endl;
  c1.attack("target 1");
  c1.seeInfo();
  c1.takeDamage(9);
  c1.beRepaired(2);
  std::cout << "---------------------------------" << std::endl;
  c1.seeInfo();
std::cout << "---------------------------------" << std::endl;
  c1.attack("target 1");
  c1.attack("target 2");
  c1.beRepaired(10);
  c1.seeInfo();
  std::cout << "----------------c2---------------" << std::endl;
  c2.seeInfo();
  c2.takeDamage(9);
  c2.takeDamage(1);
  c2.seeInfo();
  c2.takeDamage(std::numeric_limits<unsigned int>::min());
  std::cout << "---------------------------------" << std::endl;
c1.seeInfo();

	return (0);
}