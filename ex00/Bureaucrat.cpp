/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:53:26 by maissat           #+#    #+#             */
/*   Updated: 2026/01/12 17:11:09 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(int grade, std::string name) : name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(void) : grade(150), name("Random")
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
		this->grade = other.grade;
	return (*this);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

void Bureaucrat::Increment()
{
	if (this->grade - 1 < 1)
		throw GradeTooHighException();
	this->grade--;
}
void Bureaucrat::Decrement()
{
	if (this->grade + 1 > 150)
		throw GradeTooLowException();
	this->grade++;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high, must be in 1-150 range !\n");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low, must be in 1-150 range !\n");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade : " << b.getGrade();
	return out;
}