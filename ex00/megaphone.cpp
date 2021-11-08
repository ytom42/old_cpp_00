/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:11:55 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/08 10:46:13 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		std::string str = argv[i];
		for (int j = 0; j < str.size(); j++)
			str[j] = toupper(str[j]);
		std::cout << str << std::endl;
	}
	return (0);
}
