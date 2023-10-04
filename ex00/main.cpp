/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 05:16:41 by ymarival          #+#    #+#             */
/*   Updated: 2023/10/04 05:16:41 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalarconverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "One Argument required." << std::endl;
		return (1);
	}
	try
	{
		ScalarConverter conversion(argv[1]);
		// try
		// {
		// 	Conversion copy(conversion);
		// }
		// catch(const std::exception& e)
		// {
		// 	std::cerr << e.what() << std::endl;
		// }
	}
	catch(const ScalarConverter::ErrorException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}