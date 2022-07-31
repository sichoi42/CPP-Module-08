/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 20:19:04 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/31 20:35:08 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	std::cout << GREEN << "test iterator" << RESET << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << GREEN << "test const_iterator" << RESET << std::endl;
	MutantStack<int>::const_iterator citer;
	for (citer = mstack.cbegin(); citer != mstack.cend(); ++citer)
		std::cout << *citer << std::endl;

	std::cout << GREEN << "test reverse_iterator" << RESET << std::endl;
	MutantStack<int>::reverse_iterator riter;
	for (riter = mstack.rbegin(); riter != mstack.rend(); ++riter)
		std::cout << *riter << std::endl;

	std::cout << GREEN << "test const_reverse_iterator" << RESET << std::endl;
	MutantStack<int>::const_reverse_iterator criter;
	for (criter = mstack.crbegin(); criter != mstack.crend(); ++criter)
		std::cout << *criter << std::endl;
	return (0);
}
