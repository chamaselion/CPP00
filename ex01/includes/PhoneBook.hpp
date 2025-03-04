/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:53:50 by bszikora          #+#    #+#             */
/*   Updated: 2025/02/28 19:48:49 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <cctype>

class PhoneBook
{
private:
	Contact contacts[7];
	int	number_of_contacts;
	int	contact_id;
public:
	PhoneBook();
	~PhoneBook();

	void add_contact(int id);
	void search_contact();
	void print_contacts();
	void print_contact(int id);
};

# endif