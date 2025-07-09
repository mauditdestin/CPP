/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:54:13 by pleblond          #+#    #+#             */
/*   Updated: 2025/07/09 12:54:13 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main()
{
	Harl _Harl;
	_Harl.complain("debug");
	_Harl.complain("not a message");
	_Harl.complain("info");
	_Harl.complain("warning");
	_Harl.complain("error");
	return 0;
}