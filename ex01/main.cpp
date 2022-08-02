/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:13:55 by sichoi            #+#    #+#             */
/*   Updated: 2022/08/02 15:40:56 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	{
		Span sp = Span(7);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(11);

		std::cout << "size: " << sp.getVector().size() << std::endl;
		std::cout << "capacity: " << sp.getVector().capacity() << std::endl;
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
		std::cout << "==================" << std::endl;
		try
		{
			std::vector<int> a(2);
			sp.addNumber(a.begin(), a.end());
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "==================" << std::endl;

	{
		Span sp = Span(2);
		sp.addNumber(1);
		try
		{
			sp.shortestSpan();
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			sp.longestSpan();
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "==================" << std::endl;

	{
		Span sp = Span(10000);
		std::deque<int> dq;
		for (int i = 0; i < 10000; ++i)
		{
			if (i % 2 == 0)
				dq.push_front(i);
			else
				dq.push_back(i);
		}
		sp.addNumber(dq.begin(), dq.end());
		std::cout << "size: " << sp.getVector().size() << std::endl;
		std::cout << "capacity: " << sp.getVector().capacity() << std::endl;
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	return (0);
}
