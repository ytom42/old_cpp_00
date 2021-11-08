/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:03:23 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/08 15:57:02 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

std::string inputFirstName()
{
	std::string firstName;
	std::cout << "First name: ";
	std::cin >> firstName;
	if (firstName.length() > 10)
		firstName = firstName.substr(0, 9) + ".";
	return (firstName);
}

std::string inputLastName()
{
	std::string lastName;
	std::cout << "Last name: ";
	std::cin >> lastName;
	if (lastName.length() > 10)
		lastName = lastName.substr(0, 9) + ".";
	return (lastName);
}

std::string inputNickName()
{
	std::string nickName;
	std::cout << "Nickname: ";
	std::cin >> nickName;
	if (nickName.length() > 10)
		nickName = nickName.substr(0, 9) + ".";
	return (nickName);
}

std::string inputPhoneNumber()
{
	std::string phoneNumber;
	std::cout << "Phone number: ";
	std::cin >> phoneNumber;
	return (phoneNumber);
}

std::string inputDarkestSecret()
{
	std::string darkestSecret;
	std::cout << "Darkest secret: ";
	std::cin >> darkestSecret;
	return (darkestSecret);
}