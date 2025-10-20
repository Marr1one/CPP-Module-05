/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:47:27 by root              #+#    #+#             */
/*   Updated: 2025/10/20 14:34:11 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default form", 145, 137), target("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other) : AForm(other), target(other.target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
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
	{
		std::cout << " on arrive ici\n";
		throw GradeTooLowException();
	}
	std::cout << "TARGET === > " << target << std::endl;
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

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm &scf)
{
	out << scf.getName() << ", required sign grade :" << scf.getSign_grade() << ", execute grade :" << scf.getExec_grade();
	return out;
}