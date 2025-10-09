/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:53:26 by maissat           #+#    #+#             */
/*   Updated: 2025/10/09 20:07:46 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(int grade, std::string name) : name(name), grade(grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat &other) : name(other.name), grade(other.grade)
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &other)	
{
	if (this != &other)
	{
		this->grade = grade;
	}
	return (*this);
}

int Bureaucrat::getGrade(Bureaucrat &b) const
{
	return (this->grade);
}

std::string Bureaucrat::getName(Bureaucrat &b) const
{
	return (this->name);
}

void Bureaucrat::Increment()
{
	this->grade++;
}

void Bureaucrat::Decrement()
{
	this->grade--;
}

std::string Bureaucrat::GradeTooHighException::what()
{
	return ("Grade too high, must be in 1-150 range !\n");
}

std::string Bureaucrat::GradeTooLowException::what()
{
	return ("Grade too low, must be in 1-150 range !\n");
}