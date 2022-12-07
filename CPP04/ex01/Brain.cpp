/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:22:13 by stissera          #+#    #+#             */
/*   Updated: 2022/12/07 12:22:13 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const& cpy)
{
	int i = -1;
	while (!cpy.ideas[++i].empty())
		this->ideas[i] = cpy.ideas[i];
	std::cout << "Brain copy constructor called." << std::endl;
}

Brain::Brain(Brain const* cpy)
{
	int i = -1;
	while (!cpy->ideas[++i].empty())
		this->ideas[i] = cpy->ideas[i];
	std::cout << "Brain copy constructor called." << std::endl;
}

Brain& Brain::operator=(Brain const& cpy)
{
	int i = -1;
	while (!cpy.ideas[++i].empty())
		this->ideas[i] = cpy.ideas[i];
	std::cout << "Brain operator copy called." << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}