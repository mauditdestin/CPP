/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:34:49 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/09 12:34:49 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

void replace(std::string *line, const std::string &to_replace, const std::string &new_str)
{
	size_t start_pos = 0;

	if (to_replace.empty())
		return;

	while ((start_pos = line->find(to_replace, start_pos)) != std::string::npos)
	{
		line->erase(start_pos, to_replace.length());
		line->insert(start_pos, new_str);
		start_pos += new_str.length();
	}

}

int main(int argc, char **argv)
{
	if (argc != 4 || !argv[2][0] || !argv[3][0])
	{
		std::cout << "Arguments error." << std::endl;
		return EXIT_FAILURE;
	}

	std::ifstream input(argv[1]);
	if (!input.is_open())
	{
		std::cout << "Could not open input file." << std::endl;
		return EXIT_FAILURE;
	}

	std::string name = std::string(argv[1]) + ".replace";
	std::ofstream output(name.c_str());
	if (!output.is_open())
	{
		std::cout << "Could not open output file." << std::endl;
		return EXIT_FAILURE;
	}

	std::string line;
	std::string to_replace = argv[2];
	std::string new_str (argv[3]);

	while (std::getline(input, line))
	{
		replace(&line, to_replace, new_str);
		output << line << std::endl;
	}
	
	input.close();
	output.close();
	return EXIT_SUCCESS;
}