/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 01:58:27 by pleblond          #+#    #+#             */
/*   Updated: 2025/01/25 01:58:27 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	toUpper(char **str)
{
	int	i = 0;

	while ((*str)[i])
	{
		if ((*str)[i] >= 'a' && (*str)[i] <= 'z')
			(*str)[i] -= 32;
		i++;
	}
}

int main(int argc, char **argv)
{
	int i = 1;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else {
		while (argv[i])
		{
			toUpper(&argv[i]);
			std::cout << argv[i];
			if (argv[i + 1])
				std::cout << " ";
			i++;
		}
		std::cout << "\n";
	}
	return (0);
}