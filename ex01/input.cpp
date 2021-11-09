/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:03:23 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/09 13:36:12 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "standard.hpp"

std::string inputFirstName()
{
	std::string firstName;
	std::cout << "First name: ";
	std::cin >> firstName;
	return (firstName);
}

std::string inputLastName()
{
	std::string lastName;
	std::cout << "Last name: ";
	std::cin >> lastName;
	return (lastName);
}

std::string inputNickName()
{
	std::string nickName;
	std::cout << "Nickname: ";
	std::cin >> nickName;
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