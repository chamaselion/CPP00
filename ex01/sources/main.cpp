/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 19:34:56 by bszikora          #+#    #+#             */
/*   Updated: 2025/05/02 12:06:27 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	cmd;
	int			id;
	int			times_full;
	int			full_count;

	id = 0;
	full_count = 0;
	times_full = 0;
	std::cout << "\033[2J\033[1;1H";
	std::cout << "Welcome to PhoneBook!\n";

	while (1)
	{
		std::cout << "Available commands: ADD, SEARCH, EXIT\n";
		std::cout << "Enter command: ";
		if (!(std::cin >> cmd))
		{
			std::cout << "\nExiting program.\n";
			break;
		}
		std::cout << "\033[2J\033[1;1H";

		if (cmd == "ADD")
		{
			id++;
			full_count++;
		}
		if (cmd =="ADD" && full_count % 8 == 0)
			times_full++;
		if (cmd == "ADD" && id > 8)
		{
			id = id - (times_full * (phonebook.get_number_of_contacts()));
			std::cout << "times full " <<times_full << std::endl;
		}
		std::cout << "id numebr " << id << std::endl;
		if (cmd == "ADD" && id <= 8)
			phonebook.add_contact(id);
		if (cmd == "SEARCH")
		    phonebook.search_contact();
		if (cmd == "EXIT")
			break ;
		if (cmd != "ADD" && cmd != "SEARCH" && cmd != "EXIT")
			std::cout << "Invalid command!\n";
	}
	return (0);
}