/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 18:32:14 by bszikora          #+#    #+#             */
/*   Updated: 2025/02/28 19:17:09 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int validate_letter_string(const std::string &str)
{
	int	i;

	if (str.empty())
	{
		std::cout << "Error: Input cannot be empty.\n";
		return (1);
	}

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			std::cout << "Error: Input cannot contain spaces.\n";
			return (1);
		}

		if (!isalpha(str[i]))
		{
			std::cout << "Error: Input must contain only letters.\n";
			return (1);
		}
		i++;
	}
	return (0);
}

int get_contact_info(std::string &fn, std::string &ln, std::string &n, std::string &pn, std::string &ds)
{
	std::string temp;
	while(1)
	{
		std::cout << "Please enter your first name:\n";
		std::cin >> temp;
		if (validate_letter_string(temp) == 0)
		{
			fn = temp;
		}
		temp.clear();
	}

	std::cout << "Please enter your last name:\n";
	std::cin >> temp;
	if (validate_letter_string(temp) == 0)
	{
		ln = temp;
	}
	temp.clear();

	std::cout << "Please enter your nickname:\n";
	std::cin >> temp;
	if (validate_letter_string(temp) == 0)
	{
		n = temp;
	}
	temp.clear();

	std::cout << "Please enter your phone number:\n";
	std::cin >> temp;
	if (validate_number_string(temp) == 0)
	{
		pn = temp;
	}
	temp.clear();

	std::cout << "Please enter your darkest secret:\n";
	std::cin >> temp;
	if (validate_mixed_string(temp) == 0)
	{
		ds = temp;
	}

	return 0;
}

void PhoneBook::add_contact(int id)
{
	// For contacts
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	// For phonebook
	int number_of_contacts;
	int contact_id = id;
	


	this->contacts[contact_id].set_first_name(first_name);
	this->contacts[contact_id].set_last_name(last_name);
	this->contacts[contact_id].set_nickname(nickname);
	this->contacts[contact_id].set_phone_number(phone_number);
	this->contacts[contact_id].set_darkest_secret(darkest_secret);

}