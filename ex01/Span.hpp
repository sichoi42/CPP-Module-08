/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:36:39 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/31 18:51:45 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# define GREEN "\033[0;32m"
# define RED  "\033[0;31m"
# define RESET "\033[0m"

# include <iostream>
# include <vector>
# include <stdexcept>
# include <algorithm>
# include <set>

class Span
{
	private:
		std::vector<int>	_v;

		Span();

	public:
		Span(unsigned int size);
		~Span();
		Span(const Span& sp);

		Span&					operator=(const Span& sp);
		void					addNumber(int n);
		const std::vector<int>&	getVector(void) const;
		unsigned int			shortestSpan(void) const;
		unsigned int			longestSpan(void) const;

		template <typename T>
		void	addNumber(T begin, T end)
		{
			if (std::distance(begin, end) > static_cast<int>(_v.capacity() - _v.size()))
				throw (std::runtime_error(std::string("Span is full!!")));
			while (begin != end)
				_v.push_back(*begin++);
		}
};

#endif
