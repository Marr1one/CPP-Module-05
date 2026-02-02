/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:01:19 by root              #+#    #+#             */
/*   Updated: 2026/02/02 15:02:24 by maissat          ###   ########.fr       */
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
    
    std::cout << "=== Test 1: PresidentialPardonForm - Succès ===" << std::endl;
    try
    {
        Bureaucrat president(5, "President");
        PresidentialPardonForm ppf("Criminel");
        std::cout << ppf << std::endl;
        std::cout << president << std::endl;
        president.signForm(ppf);
        president.executeForm(ppf);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 2: PresidentialPardonForm - Grade insuffisant pour signer ===" << std::endl;
    try
    {
        Bureaucrat employe(50, "Employe");
        PresidentialPardonForm ppf("Target");
        std::cout << ppf << std::endl;
        employe.signForm(ppf);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 3: PresidentialPardonForm - Non signé ===" << std::endl;
    try
    {
        Bureaucrat boss(1, "Boss");
        PresidentialPardonForm ppf("Prisonnier");
        std::cout << ppf << std::endl;
        boss.executeForm(ppf); // Pas signé
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 4: RobotomyRequestForm - Succès ===" << std::endl;
    try
    {
        Bureaucrat ingenieur(45, "Ingenieur");
        RobotomyRequestForm rrf("Bender");
        std::cout << rrf << std::endl;
        ingenieur.signForm(rrf);
        ingenieur.executeForm(rrf);
        std::cout << "\nDeuxième tentative:" << std::endl;
        ingenieur.executeForm(rrf);
        std::cout << "\nTroisième tentative:" << std::endl;
        ingenieur.executeForm(rrf);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 5: RobotomyRequestForm - Grade insuffisant pour exécuter ===" << std::endl;
    try
    {
        Bureaucrat stagiaire(72, "Stagiaire");
        Bureaucrat chef(40, "Chef");
        RobotomyRequestForm rrf("Robot");
        
        chef.signForm(rrf);
        stagiaire.executeForm(rrf);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 6: ShrubberyCreationForm - Succès ===" << std::endl;
    try
    {
        Bureaucrat jardinier(137, "Jardinier");
        ShrubberyCreationForm scf("home");
        std::cout << scf << std::endl;
        jardinier.signForm(scf);
        jardinier.executeForm(scf);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 7: ShrubberyCreationForm - Grade insuffisant ===" << std::endl;
    try
    {
        Bureaucrat novice(145, "Novice");
        ShrubberyCreationForm scf("jardin");
        std::cout << scf << std::endl;
        novice.signForm(scf);
        novice.executeForm(scf); // Grade trop bas (137 requis)
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 8: Tous les formulaires - Bureaucrat très haut gradé ===" << std::endl;
    try
    {
        Bureaucrat supreme(1, "Supreme");
        PresidentialPardonForm ppf("Voleur");
        RobotomyRequestForm rrf("C3PO");
        ShrubberyCreationForm scf("parc");
        
        std::cout << supreme << std::endl;
        
        supreme.signForm(ppf);
        supreme.executeForm(ppf);
        
        std::cout << std::endl;
        supreme.signForm(rrf);
        supreme.executeForm(rrf);
        
        std::cout << std::endl;
        supreme.signForm(scf);
        supreme.executeForm(scf);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
