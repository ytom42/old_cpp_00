/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:03:23 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/09 16:50:50 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "standard.hpp"

int checkAlpha(std::string str)
{
	for (int i = 0; i < int(str.size()); i++)
	{
		if (isalpha(str[i]) == 0)
		{
			std::cin.ignore(100, '\n');
			return (0);
		}
	}
	return (1);
}

int checkDigit(std::string str)
{
	for (int i = 0; i < int(str.size()); i++)
	{
		if (isdigit(str[i]) == 0)
		{
			std::cin.ignore(100, '\n');
			return (0);
		}
	}
	return (1);
}

std::string inputFirstName()
{
	int n;
	std::string firstName;
	while (1)
	{
		std::cout << "First name: ";
		std::cin >> firstName;
		if (std::cin.eof())
			std::exit(1);
		else
		{
			n = checkAlpha(firstName);
			if (n == 1)
				break;
			else
				std::cout << "Error: Please enter the alphabet" << std::endl;
		}
	}
	return (firstName);
}

std::string inputLastName()
{
	int n;
	std::string lastName;
	while (1)
	{
		std::cout << "Last name: ";
		std::cin >> lastName;
		if (std::cin.eof())
			std::exit(1);
		else
		{
			n = checkAlpha(lastName);
			if (n == 1)
				break;
			else
				std::cout << "Error: Please enter the alphabet" << std::endl;
		}
	}
	return (lastName);
}

std::string inputNickName()
{
	int n;
	std::string nickName;
	while (1)
	{
		std::cout << "Nickname: ";
		std::cin >> nickName;
		if (std::cin.eof())
			std::exit(1);
		else
		{
			n = checkAlpha(nickName);
			if (n == 1)
				break;
			else
				std::cout << "Error: Please enter the alphabet" << std::endl;
		}
	}
	return (nickName);
}

std::string inputPhoneNumber()
{
	int n;
	std::string phoneNumber;
	while (1)
	{
		std::cout << "Phone number: ";
		std::cin >> phoneNumber;
		if (std::cin.eof())
			std::exit(1);
		else
		{
			n = checkDigit(phoneNumber);
			if (n == 1)
				break;
			else
				std::cout << "Error: Please enter the number" << std::endl;
		}
	}
	return (phoneNumber);
}

std::string inputDarkestSecret()
{
	std::string darkestSecret;
	std::cout << "Darkest secret: ";
	std::cin >> darkestSecret;
	if (std::cin.eof())
		std::exit(1);
	return (darkestSecret);
}