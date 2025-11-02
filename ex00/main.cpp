/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:52:48 by maissat           #+#    #+#             */
/*   Updated: 2025/11/02 15:18:09 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b;
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
		std::cerr << "Exception catched : " << e.what() << std::endl;
	}
	return (0);
	
}