/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:15:20 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/09 12:52:59 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "standard.hpp"
#include "Phonebook.hpp"

int main(void)
{
	Phonebook phonebook;

	while (1)
	{
		std::cout << "[ADD] or [SEARCH] or [EXIT]" << std::endl;
		std::string str;
		std::cin >> str;
		if (str == "EXIT")
			return (0);
		else if (str == "ADD")
			phonebook.add();
		else if (str == "SEARCH")
			phonebook.search();
		else
			continue ;
	}
}
