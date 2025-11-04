/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:43:13 by root              #+#    #+#             */
/*   Updated: 2025/11/04 20:54:10 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern(Intern &other)
{}//na pas trop de sens car intern n'a rien de private.

Intern &Intern::operator=(Intern &other){return *this;} //non plus

AForm *create_PPF(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm *create_RRF(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm *create_SCF(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeform(std::string name, std::string target)
{
	std::string tab_names[3] = {"robotomy request","shrubbery creation","presidential pardon"};
	AForm *(*func_tab[])(std::string) = {&create_RRF, &create_SCF, &create_PPF};
	
	int i = 0;
	while (i < 3 )
	{
		if (name == tab_names[i])
		{
			std::cout << "i = " << i << std::endl;
			return (func_tab[i](target));
		}
		i++;
	}
	throw std::runtime_error("Form name not found\n");
	return (NULL);
}