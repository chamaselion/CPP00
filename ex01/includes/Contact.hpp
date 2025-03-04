/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:55:55 by bszikora          #+#    #+#             */
/*   Updated: 2025/03/04 17:04:00 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	int			id;
	
public:
	Contact();
	~Contact();

	// Getter
	std::string get_first_name() const;
	std::string get_last_name() const;
	std::string get_nickname() const;
	std::string get_phone_number() const;
	std::string get_darkest_secret() const;
	int			get_id() const;
	// Setter
	void set_first_name(const std::string &first_name);
	void set_last_name(const std::string &last_name);
	void set_nickname(const std::string &nickname);
	void set_phone_number(const std::string &phone_number);
	void set_darkest_secret(const std::string &darkest_secret);
	void set_id(const int &id);
};


# endif