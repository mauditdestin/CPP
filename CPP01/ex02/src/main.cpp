/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:36:51 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/09 11:36:51 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "brain :		" << &brain << std::endl;
	std::cout << "stringPTR :	" << stringPTR << std::endl;
	std::cout << "stringREF :	" << &stringREF << std::endl;
	std::cout << "brain :		" << brain << std::endl;
	std::cout << "stringPTR :	" << *stringPTR << std::endl;
	std::cout << "stringREF :	" << stringREF << std::endl;
	return EXIT_SUCCESS;
}