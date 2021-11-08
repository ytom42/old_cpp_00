/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:52:36 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/08 15:58:57 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

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
	std::cout << "|" << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "firstname" << "|";
	std::cout << std::setw(10) << "lastname" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (this->contacts[i].getFirstName() != "")
		{
			std::cout << "|" << std::setw(10) << i + 1 << "|";
			std::cout << std::setw(10) << this->contacts[i].getFirstName() << "|";
			std::cout << std::setw(10) << this->contacts[i].getLastName()  << "|";
			std::cout << std::setw(10) << this->contacts[i].getNickname()  << "|" << std::endl;
		}
	}
	return (0);
}

#endif