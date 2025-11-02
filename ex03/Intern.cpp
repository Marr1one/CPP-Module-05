/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:43:13 by root              #+#    #+#             */
/*   Updated: 2025/11/02 19:47:49 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern(Intern &other)
{}//na pas trop de sens car intern n'a rien de private.

Intern &Intern::operator=(Intern &other){return *this;} //non plus

AForm *Intern::makeform(std::string name, std::string target)
{
	std::string tab_names[3] = {"robotomy request","shrubbery creation","presidential pardon"};
	
	int i = 0;
	bool found = false;
	while (i < 3 )
	{
		if (name == tab_names[i])
		{
			found = true;
			break;
		}
		i++;
	}
	if (!found)
	{
		throw std::runtime_error("Form name not found\n");
		return (NULL);
	}
		
	switch (i)
	{
		case 0:
			std::cout << "Intern create " << name << " form\n";
			return (new RobotomyRequestForm(target));
			break;
		case 1:
			std::cout << "Intern create " << name << " form\n";                   ?//A REFAIRE AVEC DES POINTEURS  SUR FONCTION 
			return (new ShrubberyCreationForm(target));
			break;
		case 2:
			std::cout << "Intern create " << name << " form\n";
			return (new PresidentialPardonForm(target));
			break;
		default:
			return (NULL);
	}
}