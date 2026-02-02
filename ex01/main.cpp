/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:52:48 by maissat           #+#    #+#             */
/*   Updated: 2026/02/02 15:02:34 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "=== Test 1: Construction Form normale ===" << std::endl;
    try
    {
        Form f1("Formulaire A", 50, 100);
        std::cout << f1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 2: Form avec grades invalides ===" << std::endl;
    try
    {
        Form invalid("InvalidForm", 0, 100);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 3: Signature avec grade insuffisant ===" << std::endl;
    try
    {
        Form f2("Formulaire B", 50, 100);
        Bureaucrat alice(100, "Alice");
        std::cout << f2 << std::endl;
        std::cout << alice << std::endl;
        alice.signForm(f2);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 4: Signature avec grade suffisant ===" << std::endl;
    try
    {
        Form f3("Formulaire C", 50, 100);
        Bureaucrat bob(40, "Bob");
        std::cout << f3 << std::endl;
        bob.signForm(f3);
        std::cout << "Après signature: " << f3 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 5: Signer un Form déjà signé ===" << std::endl;
    try
    {
        Form f4("Formulaire D", 50, 100);
        Bureaucrat charlie(30, "Charlie");
        Bureaucrat dave(20, "Dave");
        
        charlie.signForm(f4);
        std::cout << f4 << std::endl;
        dave.signForm(f4);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
