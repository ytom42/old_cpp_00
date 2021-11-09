/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:52:36 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/09 13:23:40 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include "standard.hpp"

std::string inputFirstName();
std::string inputLastName();
std::string inputNickName();
std::string inputPhoneNumber();
std::string inputDarkestSecret();

class Phonebook
{
private:
	Contact contacts[8];
public:
	Phonebook() {};
	int add();
	int search();
};

int	Phonebook::add()
{
	static int i = 0;
	Contact contact;
	std::string str;

	contact.setFirstName(inputFirstName());
	contact.setLastName(inputLastName());
	contact.setNickname(inputNickName());
	contact.setPhonenumber(inputPhoneNumber());
	contact.setDarkestSecret(inputDarkestSecret());
	this->contacts[i] = contact;
	i++;
	if (i == 8)
		i = 0;
	return (0);
}

int	Phonebook::search()
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "firstname" << "|";
	std::cout << std::setw(10) << "lastname" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::string tmp;
		if (this->contacts[i].getFirstName() != "")
		{
			std::cout << "|" << std::setw(10) << i + 1 << "|";
			if (this->contacts[i].getFirstName().length() > 10)
				tmp = this->contacts[i].getFirstName().substr(0, 9) + ".";
			else
				tmp = this->contacts[i].getFirstName();
			std::cout << std::setw(10) << tmp << "|";
			if (this->contacts[i].getLastName().length() > 10)
				tmp = this->contacts[i].getLastName().substr(0, 9) + ".";
			else
				tmp = this->contacts[i].getLastName();
			std::cout << std::setw(10) << tmp << "|";
			if (this->contacts[i].getNickname().length() > 10)
				tmp = this->contacts[i].getNickname().substr(0, 9) + ".";
			else
				tmp = this->contacts[i].getNickname();
			std::cout << std::setw(10) << tmp  << "|" << std::endl;
		}
	}
	std::cout << "---------------------------------------------" << std::endl;

	std::cout << "Enter the index of the contact you want to see: ";
	while (1)
	{
		int n;
		std::cin >> n;
		if (this->contacts[n - 1].getFirstName() != "")
		{
			std::cout << "First name: " << this->contacts[n - 1].getFirstName() << std::endl;
			std::cout << "Last name: " << this->contacts[n - 1].getLastName() << std::endl;
			std::cout << "Nickname: " << this->contacts[n - 1].getNickname() << std::endl;
			std::cout << "Phone number: " << this->contacts[n - 1].getPhonenumber() << std::endl;
			std::cout << "Darkest secret: " << this->contacts[n - 1].getDarkestSecret() << std::endl;
			break;
		}
		else
			std::cout << "Error: contact not found" << std::endl;
	}
	return (0);
}

#endif