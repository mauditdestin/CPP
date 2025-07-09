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

void replace(std::string *line, std::string to_replace, std::string new_str)
{
	size_t start_pos;

	while ((start_pos = (*line).find(to_replace)) != std::string::npos)
	{
		(*line).erase(start_pos, to_replace.length());
		(*line).insert(start_pos, new_str);
	}
}

int main(int agrc, char **argv)
{

	return EXIT_SUCCESS;
}