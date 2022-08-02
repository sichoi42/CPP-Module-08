/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 23:46:28 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/31 18:41:12 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

# include <iterator>
# include <stdexcept>
# include <iostream>
# include <vector>
# include <deque>
# include <list>

template <typename T>
typename T::iterator easyfind(T& type, int target)
{
	typename T::iterator	iter = std::find(std::begin(type), std::end(type), target);
	if (iter == std::end(type))
		throw (std::runtime_error(std::string("cannot found!!")));
	return (iter);
}

template <typename T>
void	test(T& type, int target)
{
	try
	{
		typename T::iterator iter = easyfind(type, target);
		std::cout << "value: " << *iter << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
#endif
