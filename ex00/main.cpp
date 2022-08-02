/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 23:09:17 by sichoi            #+#    #+#             */
/*   Updated: 2022/08/02 15:25:36 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::cout << GREEN << "test vector" << RESET << std::endl;

	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	test(v, 3);
	test(v, 6);

	std::cout << GREEN << "test deque" << RESET << std::endl;

	std::deque<int> dq;
	dq.push_front(1);
	dq.push_back(2);
	dq.push_front(3);
	dq.push_back(4);
	dq.push_front(5);
	dq.push_back(6);
	test(dq, 3);
	test(dq, 0);

	std::cout << GREEN << "test list" << RESET << std::endl;

	std::list<int> lst;

	lst.push_front(1);
	lst.push_back(2);
	lst.push_front(3);
	lst.push_back(4);
	lst.push_front(5);
	lst.push_back(6);
	test(dq, 3);
	test(dq, 0);
	return (0);
}
