/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:52:48 by maissat           #+#    #+#             */
/*   Updated: 2025/10/15 16:44:09 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b(150, "Marwan");
		std::cout << b << std::endl;
		b.Increment();
		std::cout << b << std::endl;
		b.Decrement();
		std::cout << b << std::endl;
		b.Decrement();
		std::cout << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception catched !" << e.what() << std::endl;
	}
	return (0);
	
}