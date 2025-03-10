/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:53:50 by bszikora          #+#    #+#             */
/*   Updated: 2025/03/10 11:58:05 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <cctype>
#include <sstream>

class PhoneBook
{
	private:
		Contact contacts[8];
		int	number_of_contacts;
		int	contact_id;
	public:
					PhoneBook();
					~PhoneBook();

		int			get_number_of_contacts() const;
		int			get_contact_id() const;
		Contact&	get_contact(int index);

		void		set_number_of_contacts(int number);
		void		set_contact_id(int id);
		void		set_contact(int index, const Contact &contact);

		void 		add_contact(int id);
		void 		search_contact();
		void 		print_contacts();
		void 		print_contact(int id);
};

int ask_contact_info(std::string &fn, std::string &ln, std::string &n, std::string &pn, std::string &ds);

# endif