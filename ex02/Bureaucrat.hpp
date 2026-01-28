/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:55:15 by root              #+#    #+#             */
/*   Updated: 2026/01/28 16:20:56 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"


class AForm;

class Bureaucrat 
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat(int grade, std::string name);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();
		void Increment();
		void Decrement();
		void signForm(AForm &f);
		Bureaucrat &operator=(const Bureaucrat &other);
		int getGrade() const;
		std::string getName() const;
		void executeForm(AForm const & form) const;
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