/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:01:19 by root              #+#    #+#             */
/*   Updated: 2025/10/18 15:59:00 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
	//AForm test;
	try
	{
		Bureaucrat Peon(100, "Peon");
		ShrubberyCreationForm test;
		test.beSigned(Peon);
		test.execute(Peon);
		
	}
	catch( std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}