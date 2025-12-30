/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:52:48 by maissat           #+#    #+#             */
/*   Updated: 2025/12/09 15:33:01 by marwan           ###   ########.fr       */
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
		std::cerr << "Exception catched : " << e.what();
	}
	return (0);
	
}