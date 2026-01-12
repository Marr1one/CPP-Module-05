/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:37:35 by maissat           #+#    #+#             */
/*   Updated: 2026/01/12 17:24:10 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default form", 72, 45), target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other) : AForm(other), target(other.target)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string &target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &other)
{
	if (this != &other)
	{
		this->target = other.target;
	}
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const 
{
	if (!this->getIsSigned())
		throw std::runtime_error("Form is not signed !\n");
	if (executor.getGrade() > this->getExec_grade())
		throw GradeTooLowException();
	std::cout << "Drilling sounds : PRRRRRRRRRRRRRRRRRR\n";
	std::srand(std::time(NULL));
	int random = std::rand();
	std::cout <<  "chiffre random : " << random << std::endl;
	if (random  % 2 == 0)
	{
		std::cout << this->target << " has been robotomized\n";
	}
	else
	{
		std::cout << this->target << " has not been robotomized\n";
	}
}
