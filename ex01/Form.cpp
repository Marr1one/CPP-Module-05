/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:40:09 by root              #+#    #+#             */
/*   Updated: 2025/10/16 01:45:22 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name ("Default"), sign_grade(150), exec_grade(150)
{
}

Form::Form(std::string name, int sign_grade, int exex_grade) : name(name), sign_grade(sign_grade), exec_grade(exec_grade)
{
	if (sign_grade > 150)
		throw GradeTooLowException();
	if (sign_grade < 1 )
		throw GradeTooHighException();
	if (exec_grade > 150)
		throw GradeTooLowException();
	if (exec_grade < 1)
		throw GradeTooHighException();
}

Form::~Form(){}

Form::Form(Form &other) : name(other.name), is_signed(other.is_signed), sign_grade(other.sign_grade),
exec_grade(other.exec_grade)
{
}

Form &Form::operator=(Form &other)
{
	if (this != &other)
	{
		this->is_signed = other.is_signed;
	}
	return (*this);
}

const std::string Form::getName() const { return this->name;}

const int Form::getExec_grade() const {return this->exec_grade;}

const int Form::getSign_grade() const {return this->sign_grade;}

const bool Form::getIsSigned() const {return this->is_signed;}

const int Form::getSign_grade() const {return this->sign_grade;}

const char * Form::GradeTooHighException::what() const
{
	return "Grade too high ! Form's grade is out of bounds\n";
}

const char * Form::GradeTooLowException::what() const
{
	return "Grade too low ! Form's grade is out of bounds\n";
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->sign_grade)
		this->is_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Form &f)
{
	out << f.getName() << ", required sign grade :" << f.getSign_grade() << ", execute grade :" << f.getExec_grade();
	return out;
}