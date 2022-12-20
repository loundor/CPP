/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:14:18 by stissera          #+#    #+#             */
/*   Updated: 2022/12/20 13:14:18 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Base.hpp"
#include "./A.hpp"
#include "./B.hpp"
#include "./C.hpp"

int main ( void )
{
	Base *first =  generate();
	identify(first);
	identify(*first);
	delete first;

	return (0);
}