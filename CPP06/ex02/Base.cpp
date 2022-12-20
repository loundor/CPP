/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:15:18 by stissera          #+#    #+#             */
/*   Updated: 2022/12/20 13:15:18 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Base.hpp"
#include "./A.hpp"
#include "./B.hpp"
#include "./C.hpp"
#include <ctime>

Base::~Base(){};

Base * generate(void)
{
	Base *type[3] = {
						new A(),
						new B(),
						new C()
					};
	std::time_t	fail = std::time(nullptr);
	for (int i = 0; i < 3 ; i++)
	{
		if (i != (fail % 3))
			delete type[i];
	}
	return (type[fail % 3]);
}

void identify(Base* p)
{
	A *typea = dynamic_cast<A*>(p);
	B *typeb = dynamic_cast<B*>(p);
	C *typec = dynamic_cast<C*>(p);
	if (typea)
		std::cout << "*Type is A" << std::endl;
	else if (typeb)
		std::cout << "*Type is B" << std::endl;
	else if (typec)
		std::cout << "*Type is C" << std::endl;
	else
		std::cout << "*Type not found!";
}

void identify(Base& p)
{
	try	{ dynamic_cast<A&>(p); }
	catch (std::exception &e)
	{
		try { dynamic_cast<B&>(p); }
		catch (std::exception &e)
		{
			try { dynamic_cast<C&>(p); }
			catch (std::exception &e)
			{
				std::cout << "&Type not found!" << std::endl;
				return ;
			}
			std::cout << "&Type is C" << std::endl;
			return ;
		}
		std::cout << "&Type is B" << std::endl;
		return ;
	}
	std::cout << "&Type is A" << std::endl;

}