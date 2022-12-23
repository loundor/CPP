/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 01:55:36 by stissera          #+#    #+#             */
/*   Updated: 2022/12/23 01:55:36 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./easyfind.hpp"

template<typename T> void easyfind(T &array, int nbr)
{
	typename T::iterator result = std::find(array.begin(), array.end(), nbr);
	if (result != array.end())
	{
		std::cout << "Number " << *result << " Found!" << std::endl;
		return ;
	}
	throw std::invalid_argument ("Not found!");
}