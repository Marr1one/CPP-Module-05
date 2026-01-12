/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:47:27 by root              #+#    #+#             */
/*   Updated: 2026/01/12 17:21:08 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default Shrubbery Form", 145, 137), target("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other) : AForm(other), target(other.target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		this->target = other.target;
	}
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const 
{
	if (this->getIsSigned() == false)
		throw std::runtime_error("Form not signed");
	if (executor.getGrade() > this->getExec_grade())
		throw GradeTooLowException();
	std::ofstream file((target + "_shrubbery").c_str());
	if (!file.is_open())
		throw std::runtime_error("Could not open file !\n");
		
	file << "    ^\n";
	file << "   ^^^\n";
	file << "  ^^^^^\n";
	file << " ^^^^^^^\n";
	file << "    |\n";
	file << "    |\n";
	
	file.close();
}
