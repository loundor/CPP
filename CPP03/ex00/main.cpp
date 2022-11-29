/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:32:14 by stissera          #+#    #+#             */
/*   Updated: 2022/11/28 23:02:44 by stissera         ###   ########.fr       */
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

  c1.attack("target 1");
  c1.attack("");
  c1.seeInfo();

  c1.takeDamage(9);

  c1.beRepaired(2);

  c1.beRepaired(std::numeric_limits<unsigned int>::min());
 c1.seeInfo();
  c1.beRepaired(std::numeric_limits<unsigned int>::max());
c1.seeInfo();

  c1.attack("target 1");
  c1.attack("target 2");
  c1.attack("target 1");
  c1.attack("target 2");
  c1.attack("target 1");

  c1.attack("target 1");
  c1.beRepaired(10);
c1.seeInfo();

  c1.takeDamage(9);
  c1.takeDamage(std::numeric_limits<unsigned int>::max());
  c1.takeDamage(1);

c1.seeInfo();

  c2.takeDamage(std::numeric_limits<unsigned int>::min());
  c3.takeDamage(std::numeric_limits<unsigned int>::max());

c1.seeInfo();

	return (0);
}