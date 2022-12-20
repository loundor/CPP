/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:14:43 by stissera          #+#    #+#             */
/*   Updated: 2022/12/20 13:14:43 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class A;
class B;
class C;

class Base
{
	public:
	virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);


#endif