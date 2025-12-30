/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:56:04 by root              #+#    #+#             */
/*   Updated: 2025/12/09 16:35:28 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name ("Default"), _sign_grade(150), _exec_grade(150), _is_signed(false)
{
}

AForm::AForm(std::string name, int sign_grade, int exec_grade) : _is_signed(false), _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
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

AForm::~AForm(){}

AForm::AForm(AForm &other) : _name(other._name), _is_signed(other._is_signed), _sign_grade(other._sign_grade),
_exec_grade(other._exec_grade)
{
}

AForm &AForm::operator=(AForm &other)
{
	if (this != &other)
	{
		this->_is_signed = other._is_signed;
	}
	return (*this);
}

const std::string AForm::getName() const { return this->_name;}

const int AForm::getSign_grade() const {return this->_sign_grade;}

const int AForm::getExec_grade() const {return this->_exec_grade;}

const bool AForm::getIsSigned() const {return this->_is_signed;}

const char * AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high !\n";
}

const char * AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low !\n";
}

void AForm::beSigned(Bureaucrat &b)
{
	if (this->_is_signed == true)
	{
		throw std::runtime_error("the AForm is already signed !\n");
	}
	if (b.getGrade() <= this->_sign_grade)
		this->_is_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, AForm &f)
{
	out << f.getName() << ", required sign grade :" << f.getSign_grade() << ", execute grade :" << f.getExec_grade();
	return out;
}

// AForm::AForm() : name ("Default"), sign_grade(150), exec_grade(150)
// {
// }

// AForm::AForm(std::string name, int sign_grade, int exec_grade) : name(name), sign_grade(sign_grade), exec_grade(exec_grade)
// {
// 	if (sign_grade > 150)
// 		throw GradeTooLowException();
// 	if (sign_grade < 1 )
// 		throw GradeTooHighException();
// 	if (exec_grade > 150)
// 		throw GradeTooLowException();
// 	if (exec_grade < 1)
// 		throw GradeTooHighException();
// }

// AForm::~AForm(){}

// AForm::AForm(AForm &other) : name(other.name), is_signed(other.is_signed), sign_grade(other.sign_grade),
// exec_grade(other.exec_grade)
// {
// }

// AForm &AForm::operator=(AForm &other)
// {
// 	if (this != &other)
// 	{
// 		this->is_signed = other.is_signed;
// 	}
// 	return (*this);
// }

// const std::string AForm::getName() const { return this->name;}

// const int AForm::getExec_grade() const {return this->exec_grade;}

// const int AForm::getSign_grade() const {return this->sign_grade;}

// const bool AForm::getIsSigned() const {return this->is_signed;}


//  const char * AForm::GradeTooHighException::what() const throw()
// {
// 	return "Grade too high ! Form's grade is out of bounds\n";
// }

//  const char * AForm::GradeTooLowException::what() const  throw()
// {
// 	return "Grade too low ! Form's grade is out of bounds\n";
// }

// void AForm::beSigned(Bureaucrat &b)
// {
// 	if (b.getGrade() <= this->sign_grade)
// 	{
// 		this->is_signed = true;
// 	}
// 	else
// 	{
// 		std::cout << "On est dans ce cas la \n";
// 		throw GradeTooLowException();
// 	}
// }

// std::ostream &operator<<(std::ostream &out, AForm &f)
// {
// 	out << f.getName() << ", required sign grade :" << f.getSign_grade() << ", execute grade :" << f.getExec_grade();
// 	return out;
// }