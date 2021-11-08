/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:15:20 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/08 15:51:53 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
	Phonebook phonebook;

	while (1)
	{
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