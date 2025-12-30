/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:52:48 by maissat           #+#    #+#             */
/*   Updated: 2025/12/09 16:01:55 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		// std::cout << "=== Test 1: Bureaucrat ===\n" << std::endl;
		// Bureaucrat b(150, "Marwan");
		// std::cout << b << std::endl;
		// b.Increment();
		// std::cout << b << std::endl;
		// b.Decrement();
		// std::cout << b << std::endl;
		// b.Decrement();
		// std::cout << b << std::endl;

		std::cout << "\n=== Test 2: Form Creation ===\n" << std::endl;
		Form f1("Formulaire A", 50, 100);
		std::cout << f1 << std::endl;

		std::cout << "\n=== Test 3: Sign Form (Grade too low) ===\n" << std::endl;
		Bureaucrat b2(100, "Alice");
		std::cout << b2 << std::endl;
		b2.signForm(f1);

		std::cout << "\n=== Test 4: Sign Form (Grade high enough) ===\n" << std::endl;
		Bureaucrat b3(40, "Bob");
		std::cout << b3 << std::endl;
		b3.signForm(f1);
		std::cout << f1 << std::endl;

		std::cout << "\n=== Test 5: Sign already signed form ===\n" << std::endl;
		b3.signForm(f1);

		std::cout << "\n=== Test 6: Decrement to exception ===\n" << std::endl;
		Bureaucrat b4(1, "Charlie");
		std::cout << b4 << std::endl;
		b4.Increment();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception catched ! " << e.what() << std::endl;
	}
	return (0);
}
