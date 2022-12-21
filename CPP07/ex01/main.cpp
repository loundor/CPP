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
	int	size = 3;
	std::string tab[size] = {	"See",
								"my",
								"list!"};
	::iter(tab, size, test);
	return (0);
}