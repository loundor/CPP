/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:52:19 by stissera          #+#    #+#             */
/*   Updated: 2022/12/21 21:52:19 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./iter.hpp"

int main( void )
{
	std::string tab[3] = {	"See",
								"my",
								"list!"};
	::iter(tab, 3, test);
	return (0);
}