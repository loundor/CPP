/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 11:16:59 by stissera          #+#    #+#             */
/*   Updated: 2022/12/28 11:16:59 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./MutantStack.hpp"

int main()
{
	std::cout << "----- test1 -----" << std::endl;
	{
		MutantStack<int> test;
		test.push(20);
		test.push(30);
		std::cout << test.top() << std::endl;
		test.pop();
		std::cout << test.size() << std::endl;
		test.push(40);
		test.push(50);
		test.push(60);
		test.push(70);
		for (MutantStack<int>::iterator it = test.begin(); it != test.end(); ++it)
        	std::cout << *it << std::endl;
	}
    std::cout << "----- test2 -----" << std::endl;
	{
		std::list<int> test2;
		test2.push_front(5);
		test2.push_front(17);
		std::cout << test2.front() << std::endl;
		test2.pop_front();
		std::cout << test2.size() << std::endl;
		test2.push_back(3);
		test2.push_back(5);
		test2.push_back(737);
		test2.push_back(0);
		for (std::list<int>::iterator it=test2.begin(); it != test2.end(); ++it)
			std::cout << *it << std::endl;
	}
    return(0);
}