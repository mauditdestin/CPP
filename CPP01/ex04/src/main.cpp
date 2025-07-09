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

int main(int agrc, char **argv)
{
	output.close();
	return EXIT_SUCCESS;
}