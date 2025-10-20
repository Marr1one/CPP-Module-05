/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:01:19 by root              #+#    #+#             */
/*   Updated: 2025/10/20 16:59:08 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
	//AForm test;
	try
	{
		Intern someIntern;
		AForm *form_capsule;

		form_capsule = someIntern.makeform("shrubbery creation", "garden");
		Bureaucrat boss(1, "boss");
		boss.signForm(*form_capsule);
		boss.executeForm(*form_capsule);
	}
	catch( std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}