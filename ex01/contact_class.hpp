/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:51:20 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/08 15:58:04 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkestSecret;
public:
	Contact() {};
	void setFirstName(std::string firstName) { this->firstName = firstName; };
	void setLastName(std::string lastName) { this->lastName = lastName; };
	void setNickname(std::string nickname) { this->nickname = nickname; };
	void setPhonenumber(std::string phonenumber) { this->phonenumber = phonenumber; };
	void setDarkestSecret(std::string darkestSecret) { this->darkestSecret = darkestSecret; };
	std::string getFirstName() { return (this->firstName); };
	std::string getLastName() { return (this->lastName); };
	std::string getNickname() { return (this->nickname); };
};

#endif
