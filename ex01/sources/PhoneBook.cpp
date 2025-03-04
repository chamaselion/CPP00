/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 18:32:14 by bszikora          #+#    #+#             */
/*   Updated: 2025/03/04 17:31:57 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {this->number_of_contacts = 0; this->contact_id = 0;}
PhoneBook::~PhoneBook() {}
//GET
int			PhoneBook::get_number_of_contacts() const {return (this->number_of_contacts);}
int			PhoneBook::get_contact_id() const {return (this->contact_id);}
Contact&	PhoneBook::get_contact(int index) {return (this->contacts[index]);}
//SET
void		PhoneBook::set_number_of_contacts(int number) {this->number_of_contacts = number;}
void		PhoneBook::set_contact_id(int id) {this->contact_id = id;}
void		PhoneBook::set_contact(int index, const Contact &contact) {this->contacts[index] = contact;}

void PhoneBook::add_contact(int id)
{
	// For contacts
	Contact		new_contact;
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
	this->contacts[contact_id].set_id(id);
	this->set_contact(contact_id, new_contact);
	this->set_number_of_contacts(this->get_number_of_contacts() + 1);
}

void PhoneBook::print_contact(int id)
{
	std::cout << "Last name: " << std::endl << this->get_contact(id).get_last_name() << std::endl;
	std::cout << "First name: " << std::endl << this->get_contact(id).get_first_name() << std::endl;
	std::cout << "Nickname: " << std::endl << this->get_contact(id).get_nickname() << std::endl;
	std::cout << "Phone number: " << std::endl << this->get_contact(id).get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << std::endl <<  this->get_contact(id).get_darkest_secret() << std::endl;
}

std::string format_field(const std::string &field)
{
	std::string formatted_field = field;
	if (formatted_field.length() > 10)
	{
		formatted_field = formatted_field.substr(0, 9) + ".";
	}
	else
	{
		while (formatted_field.length() < 10)
		{
			formatted_field = " " + formatted_field;
		}
	}
	return formatted_field;
}

void PhoneBook::print_contacts()
{
	std::cout << "Index     |First Name|Last Name |Nickname  |\n";
	for (int i = 0; i < this->get_number_of_contacts(); i++)
	{
		std::cout << this->get_contact(i).get_id() << "|";
		std::cout << format_field(this->get_contact(i).get_first_name()) << "|";
		std::cout << format_field(this->get_contact(i).get_last_name()) << "|";
		std::cout << format_field(this->get_contact(i).get_nickname()) << "|\n";
	}	
}

void PhoneBook::search_contact()
{
	int index;

	std::cout << "\033[2J\033[1;1H";
	this->print_contacts();
	std::cout << "Enter the index of the contact to display: ";
	std::cin >> index;
	if (index < 0 || index >= this->get_number_of_contacts())
	{
		std::cout << "Invalid index.\n";
	}
	else
	{
		this->print_contact(index);
	}
}