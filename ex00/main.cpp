/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:52:48 by maissat           #+#    #+#             */
/*   Updated: 2026/01/28 16:09:13 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		const Bureaucrat b;
		std::cout << b << std::endl;
		Bureaucrat a(b);
		std::cout << a << std::endl;
		// b.Increment();
		// std::cout << b << std::endl;
		// b.Decrement();
		// std::cout << b << std::endl;
		// Bureaucrat a(b);
		// std::cerr << "test a " << std::endl;
		// std::cout << a << std::endl;
		// b.Decrement();
		// std::cout << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception catched : " << e.what();
	}
	return (0);
	
}