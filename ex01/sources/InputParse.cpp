/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InputParse.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 13:42:14 by bszikora          #+#    #+#             */
/*   Updated: 2025/03/04 14:21:38 by bszikora         ###   ########.fr       */
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

		if (!std::isalpha(str[i]))
		{
			std::cout << "Error: Input must contain only letters.\n";
			return (1);
		}
		i++;
	}
	return (0);
}

int validate_mixed_string(const std::string &str)
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
		i++;
	}
	return (0);
}

int validate_number_string(const std::string &str)
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
		if (!std::isdigit(str[i]))
		{
			std::cout << "Error: Input must contain only digits.\n";
			return (1);
		}
		i++;
	}
	return (0);
}

int ask_contact_info(std::string &fn, std::string &ln, std::string &n, std::string &pn, std::string &ds)
{
	std::string temp;
	std::string output[5];
	std::string prompt[5];
	int 		state = 0;

	output[0] = fn; output[1] = ln; output[2] = n; output[3] = pn; output[4] = ds;
	prompt[0] = "Please enter your first name:\n";
	prompt[1] = "Please enter your last name:\n";
	prompt[2] = "Please enter your nickname:\n"; 
	prompt[3] = "Please enter your phone number:\n";
	prompt[4] = "Please enter your darkest secret:\n";
	
	while (state < 5)
	{
		while(1)
		{
			std::cout << prompt[state];
			std::cin >> temp;
			if (state <= 2 && validate_letter_string(temp) == 0)
				break;
			if (state == 3 && validate_number_string(temp) == 0)
				break;
			if (state == 4 && validate_mixed_string(temp) == 0)
				break;
			temp.clear();
		}
		output[state] = temp;
		temp.clear();
		state++;
    }
	fn = output[0]; ln = output[1]; n = output[2]; pn = output[3]; ds = output[4];
	return (0);
}
