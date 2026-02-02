/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:52:48 by maissat           #+#    #+#             */
/*   Updated: 2026/02/02 15:02:50 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "=== Test 1: Construction normale ===" << std::endl;
    try
    {
        Bureaucrat bob(75, "Bob");
        std::cout << bob << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 2: Grade trop élevé (0) ===" << std::endl;
    try
    {
        Bureaucrat invalid(0, "TooHigh");
        std::cout << invalid << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 3: Grade trop bas (151) ===" << std::endl;
    try
    {
        Bureaucrat invalid(151, "TooLow");
        std::cout << invalid << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 4: Increment normal ===" << std::endl;
    try
    {
        Bureaucrat alice(100, "Alice");
        std::cout << alice << std::endl;
        alice.increment();
        std::cout << "Après increment: " << alice << std::endl;
        alice.increment();
        std::cout << "Après 2e increment: " << alice << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 5: Decrement normal ===" << std::endl;
    try
    {
        Bureaucrat charlie(100, "Charlie");
        std::cout << charlie << std::endl;
        charlie.decrement();
        std::cout << "Après decrement: " << charlie << std::endl;
        charlie.decrement();
        std::cout << "Après 2e decrement: " << charlie << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 6: Increment au-delà de 1 ===" << std::endl;
    try
    {
        Bureaucrat top(2, "TopBureaucrat");
        std::cout << top << std::endl;
        top.increment();
        std::cout << "Après increment: " << top << std::endl;
        top.increment();
        std::cout << "Après 2e increment: " << top << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 7: Decrement au-delà de 150 ===" << std::endl;
    try
    {
        Bureaucrat bottom(149, "BottomBureaucrat");
        std::cout << bottom << std::endl;
        bottom.decrement();
        std::cout << "Après decrement: " << bottom << std::endl;
        bottom.decrement();
        std::cout << "Après 2e decrement: " << bottom << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 8: Constructeur par copie ===" << std::endl;
    try
    {
        Bureaucrat original(42, "Original");
        std::cout << "Original: " << original << std::endl;
        Bureaucrat copie(original);
        std::cout << "Copie: " << copie << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 9: Opérateur d'affectation ===" << std::endl;
    try
    {
        Bureaucrat a(50, "A");
        Bureaucrat b(100, "B");
        std::cout << "Avant affectation - a: " << a << std::endl;
        std::cout << "Avant affectation - b: " << b << std::endl;
        a = b;
        std::cout << "Après affectation - a: " << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}