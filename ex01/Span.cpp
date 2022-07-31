/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:40:55 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/31 19:49:44 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int size)
{
	_v.reserve(size);
	std::cout << GREEN << "Span Created!" << RESET << std::endl;
}

Span::~Span()
{
	std::cout << RED << "Span Deleted!" << RESET << std::endl;
}

Span::Span(const Span& sp)
{
	_v.reserve(sp._v.capacity());
	std::copy(std::begin(sp._v), std::end(sp._v), std::back_inserter(_v));
	std::cout << GREEN << "Copy Span Created!" << RESET << std::endl;
}

Span&	Span::operator=(const Span& sp)
{
	if (this != &sp)
	{
		_v.reserve(sp._v.capacity());
		std::copy(std::begin(sp._v), std::end(sp._v), std::back_inserter(_v));
		std::cout << GREEN << "Copy Assigned Span Created!" << RESET << std::endl;
	}
	return (*this);
}

void	Span::addNumber(int n)
{
	if (_v.size() == _v.capacity())
		throw (std::runtime_error(std::string("Span is full!!")));
	_v.push_back(n);
}

const std::vector<int>&	Span::getVector(void) const
{
	return (_v);
}

unsigned int	Span::shortestSpan(void) const
{
	std::set<int> s;
	unsigned int span = UINT_MAX;

	if (_v.size() <= 1)
		throw (std::runtime_error(std::string("No Span found!!")));
	for (std::vector<int>::const_iterator iter = _v.begin(); iter != _v.end(); ++iter)
	{
		if (!s.insert(*iter).second)
			return (0);
	}
	std::set<int>::const_iterator iter = s.begin();
	++iter;
	while (iter != s.end())
	{
		unsigned int cur = *iter - *std::prev(iter, 1);
		if (cur < span)
			span = cur;
		++iter;
	}
	return (span);
}

unsigned int	Span::longestSpan(void) const
{
	std::set<int> s(_v.begin(), _v.end());

	if (_v.size() <= 1)
		throw (std::runtime_error(std::string("No Span found!!")));
	return (*s.rbegin() - *s.begin());
}
