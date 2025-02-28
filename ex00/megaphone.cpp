/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:52:50 by bszikora          #+#    #+#             */
/*   Updated: 2025/02/28 12:29:46 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	c;
	char	strg;

	i = 1;
	while (i < argc)
	{
		c = 0;
		while (argv[i][c])
		{
			strg = argv[i][c];
			if (strg >= 'a')
			{
				if (strg <= 'z')
					strg = strg - 32;
			}
			std::cout << strg;
			c++;
		}
		i++;
	}
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}
