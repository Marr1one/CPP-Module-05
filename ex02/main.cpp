/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:01:19 by root              #+#    #+#             */
/*   Updated: 2026/01/12 17:22:40 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>

int main()
{
    std::srand(std::time(NULL));
    std::cout << "=== Test 1: PresidentialPardonForm ===\n" << std::endl;
    Bureaucrat Ministre(20, "Ministre");
    PresidentialPardonForm ppf("Amende");
    std::cout << ppf << std::endl;
    Ministre.signForm(ppf);
    std::cout << ppf << std::endl;
    Ministre.executeForm(ppf);
    
    std::cout << "\n=== Test 2: RobotomyRequestForm ===\n" << std::endl;
    Bureaucrat Ingenieur(45, "Ingenieur");
    RobotomyRequestForm rrf("Robot");
    std::cout << rrf << std::endl;
    Ingenieur.signForm(rrf);
    Ingenieur.executeForm(rrf);
    
    std::cout << "\n=== Test 3: ShrubberyCreationForm ===\n" << std::endl;
    Bureaucrat Jardinier(137, "Jardinier");
    ShrubberyCreationForm scf("HOP");
    std::cout << scf << std::endl;
    Jardinier.signForm(scf);
    Jardinier.executeForm(scf);
    
    return (0);
}
