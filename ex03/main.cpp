/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:01:19 by root              #+#    #+#             */
/*   Updated: 2026/02/02 15:02:15 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <ctime>

int main()
{
    std::srand(std::time(NULL));
    
    std::cout << "=== Test 1: Intern fait ShrubberyCreationForm ===" << std::endl;
    try
    {
        Intern someIntern;
        AForm *form = someIntern.makeform("shrubbery creation", "garden");
        
        Bureaucrat boss(1, "Boss");
        std::cout << *form << std::endl;
        boss.signForm(*form);
        boss.executeForm(*form);
        
        delete form;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 2: Intern fait RobotomyRequestForm ===" << std::endl;
    try
    {
        Intern someIntern;
        AForm *form = someIntern.makeform("robotomy request", "R2D2");
        
        Bureaucrat engineer(45, "Engineer");
        engineer.signForm(*form);
        engineer.executeForm(*form);
        
        delete form;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 3: Intern fait PresidentialPardonForm ===" << std::endl;
    try
    {
        Intern someIntern;
        AForm *form = someIntern.makeform("presidential pardon", "Criminal");
        
        Bureaucrat president(5, "President");
        president.signForm(*form);
        president.executeForm(*form);
        
        delete form;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 4: Formulaire inconnu ===" << std::endl;
    try
    {
        Intern someIntern;
        AForm *form = someIntern.makeform("unknown form", "Target");
        
        if (form)
            delete form;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 5: Grade insuffisant ===" << std::endl;
    try
    {
        Intern someIntern;
        AForm *form = someIntern.makeform("presidential pardon", "Someone");
        
        Bureaucrat lowGrade(100, "LowGrade");
        lowGrade.signForm(*form);
        
        delete form;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}