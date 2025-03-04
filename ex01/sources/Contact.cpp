/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:20:19 by bszikora          #+#    #+#             */
/*   Updated: 2025/02/28 19:41:31 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Contact.hpp>

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::get_first_name() const {return this->first_name;}
std::string Contact::get_last_name() const {return this->last_name;}
std::string Contact::get_nickname() const {return this->nickname;}
std::string Contact::get_phone_number() const {return this->phone_number;}
std::string Contact::get_darkest_secret() const {return this->darkest_secret;}

void Contact::set_first_name(const std::string &first_name) {this->first_name = first_name;}
void Contact::set_last_name(const std::string &last_name) {this->last_name = last_name;}
void Contact::set_nickname(const std::string &nickname) {this->nickname = nickname;}
void Contact::set_phone_number(const std::string &phone_number) {this->phone_number = phone_number;}
void Contact::set_darkest_secret(const std::string &darkest_secret) {this->darkest_secret = darkest_secret;}