/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:40:09 by root              #+#    #+#             */
/*   Updated: 2026/01/31 17:59:34 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name ("Default"), _sign_grade(150), _exec_grade(150), _is_signed(false)
{
}

Form::Form(std::string name, int sign_grade, int exec_grade) : _is_signed(false), _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
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

Form::Form(const Form &other) : _name(other._name), _is_signed(other._is_signed), _sign_grade(other._sign_grade),
_exec_grade(other._exec_grade)
{
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
	{
		this->_is_signed = other._is_signed;
	}
	return (*this);
}

const std::string Form::getName() const { return this->_name;}

const int Form::getSign_grade() const {return this->_sign_grade;}

const int Form::getExec_grade() const {return this->_exec_grade;}

bool Form::getIsSigned() const {return this->_is_signed;}

const char * Form::GradeTooHighException::what() const throw()
{
	return "Grade too high ! Form's grade is out of bounds\n";
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "Grade too low ! Form's grade is out of bounds\n";
}

void Form::beSigned(Bureaucrat &b)
{
	if (this->_is_signed == true)
		throw std::runtime_error("the form is already signed !\n");
	if (b.getGrade() <= this->_sign_grade)
		this->_is_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Form &f)
{
	out << f.getName() << ", required sign grade :" << f.getSign_grade() << ", execute grade :" << f.getExec_grade() << 
	" ,status(0 no signed ,1 signed): " << f.getIsSigned();
	return out;
}