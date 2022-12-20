/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialise.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:03:36 by stissera          #+#    #+#             */
/*   Updated: 2022/12/20 11:03:36 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Serialise.hpp"

uintptr_t serialize(Data* ptr)
{ return(reinterpret_cast<uintptr_t&>(ptr)); }

Data* deserialize(uintptr_t raw)
{ return(reinterpret_cast<Data*>(raw)); }