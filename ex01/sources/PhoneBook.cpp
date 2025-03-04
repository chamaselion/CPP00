/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 18:32:14 by bszikora          #+#    #+#             */
/*   Updated: 2025/03/04 14:12:48 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {this->number_of_contacts = 0; this->contact_id = 0;}
PhoneBook::~PhoneBook() {}
//GET
int		PhoneBook::get_number_of_contacts() const {return (this->number_of_contacts);}
int		PhoneBook::get_contact_id() const {return (this->contact_id);}
Contact	PhoneBook::get_contact(int index) const {return (this->contacts[index]);}
//SET
void	PhoneBook::set_number_of_contacts(int number) {this->number_of_contacts = number;}
void	PhoneBook::set_contact_id(int id) {this->contact_id = id;}
void	PhoneBook::set_contact(int index, const Contact &contact) {this->contacts[index] = contact;}

void PhoneBook::add_contact(int id)
{
	// For contacts
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	// For phonebook
	int contact_id = id;
	
	ask_contact_info(first_name, last_name, nickname, phone_number, darkest_secret);

	this->contacts[contact_id].set_first_name(first_name);
	this->contacts[contact_id].set_last_name(last_name);
	this->contacts[contact_id].set_nickname(nickname);
	this->contacts[contact_id].set_phone_number(phone_number);
	this->contacts[contact_id].set_darkest_secret(darkest_secret);

}

void PhoneBook::print_contact(int id)
{
	std::cout << this->get_contact(id).get_last_name() << std::endl;
	std::cout << this->get_contact(id).get_first_name() << std::endl;
	std::cout << this->get_contact(id).get_nickname() << std::endl;
	std::cout << this->get_contact(id).get_phone_number() << std::endl;
	std::cout << this->get_contact(id).get_darkest_secret() << std::endl;
}

void::PhoneBook::print_contacts()
{
	int i = 0;

	while (i < this->get_number_of_contacts())
	{
		this->print_contact(i);
		i++;
	}
}