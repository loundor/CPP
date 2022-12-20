/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialise.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:02:04 by stissera          #+#    #+#             */
/*   Updated: 2022/12/20 11:02:04 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALISE_HPP
#define SERIALISE_HPP
#include <iostream>

struct Data
{
	int	a = 21;
	int b = 42;
	std::string text = "Struct is not empty!";
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif