/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 19:34:56 by bszikora          #+#    #+#             */
/*   Updated: 2025/03/04 14:14:26 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	cmd;
	int			id;

	id = 1;
	std::cout << "\033[2J\033[1;1H";
	std::cout << "Welcome to PhoneBook!\n";


	while (1)
	{
		std::cout << "Available commands: ADD, SEARCH, EXIT\n";
		std::cout << "Enter command: ";
		std::cin >> cmd;
		std::cout << "\033[2J\033[1;1H";

		if (cmd == "ADD")
			id++;
		if (cmd == "ADD" && id > 8)
			id = 8;
		if (cmd == "ADD" && id <= 8)
			phonebook.add_contact(id);
		if (cmd == "SEARCH")
		    phonebook.print_contacts();
		if (cmd == "EXIT")
		{
			break ;
		}
		if (cmd != "ADD" && cmd != "SEARCH" && cmd != "EXIT")
		{
			std::cout << "Invalid command!\n";
			std::cout << "Available commands: ADD, SEARCH, EXIT\n";
		}
	}
	return (0);
}