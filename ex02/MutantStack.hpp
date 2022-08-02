/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:52:26 by sichoi            #+#    #+#             */
/*   Updated: 2022/08/02 17:02:35 by sichoi           ###   ########.fr       */
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
};

#endif
