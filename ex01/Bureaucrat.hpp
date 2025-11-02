/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:48:56 by maissat           #+#    #+#             */
/*   Updated: 2025/11/02 17:52:30 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Bureaucrat 
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(int grade, std::string name);
		Bureaucrat(Bureaucrat &other);
		~Bureaucrat();
		void Increment();
		void Decrement();
		void signForm(Form &f);
		Bureaucrat &operator=(Bureaucrat &other);
		int getGrade() const;
		std::string getName() const;
		class GradeTooLowException : public std::exception
		{
			 const char * what() const throw();
		};

		class GradeTooHighException : public std::exception
		{
			 const char * what() const throw();
		};

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);





#endif