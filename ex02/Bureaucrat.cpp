/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:55:05 by root              #+#    #+#             */
/*   Updated: 2025/10/18 15:56:09 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Bureaucrat.hpp"
#include "AForm.hpp"


Bureaucrat::Bureaucrat(int grade, std::string name) : name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->grade = grade;
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
		throw GradeTooHighException();
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

void Bureaucrat::signForm(AForm &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signed : " << f.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->name << "couldn't sign" << f.getName() << "because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade : " << b.getGrade();
	return out;
}