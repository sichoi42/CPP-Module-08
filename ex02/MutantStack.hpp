/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:52:26 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/31 20:34:21 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack() {
			std::cout << GREEN << "MutantStack Created!" << RESET << std::endl;
		};
		~MutantStack() {
			std::cout << RED << "MutantStack Deleted!" << RESET << std::endl;
		};
		MutantStack(const MutantStack& ms) {
			*this = ms;
			std::cout << GREEN << "Copy MutantStack Created!" << RESET << std::endl;
		}

		MutantStack&			operator=(const MutantStack& ms) {
			if (this != &ms) {
				std::stack<T>::operator=(ms);
				std::cout << GREEN << "Copy Assigned MutantStack Created!" << RESET << std::endl;
			}
			return (*this);
		}
		iterator				begin(void) {
			return (this->c.begin());
		}
		iterator				end(void) {
			return (this->c.end());
		}
		const_iterator			cbegin(void) const {
			return (this->c.cbegin());
		}
		const_iterator			cend(void) const {
			return (this->c.cend());
		}
		reverse_iterator		rbegin(void) {
			return (this->c.rbegin());
		}
		reverse_iterator		rend(void) {
			return (this->c.rend());
		}
		const_reverse_iterator	crbegin(void) const {
			return (this->c.crbegin());
		}
		const_reverse_iterator	crend(void) const {
			return (this->c.crend());
		}
};

#endif
