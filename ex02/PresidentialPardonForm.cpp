/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:13:30 by root              #+#    #+#             */
/*   Updated: 2025/12/09 16:29:12 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("Default presidential form", 25, 5), target("default")
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other) : AForm(other), target(other.target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &other)
{
	if (this != &other)
	{
		this->target = other.target;
	}
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const 
{
	if (!this->getIsSigned())
		throw std::runtime_error("Form is not signed !\n");
	if (executor.getGrade() > this->getExec_grade())
		throw GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox.\n";
}

std::ostream &operator<<(std::ostream &out, PresidentialPardonForm &ppf)
{
	out << ppf.getName() << ", required sign grade :" << ppf.getSign_grade() << ", execute grade :" << ppf.getExec_grade();
	return out;
}