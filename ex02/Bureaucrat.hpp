/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:55:15 by root              #+#    #+#             */
/*   Updated: 2025/10/18 15:49:45 by root             ###   ########.fr       */
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
		Bureaucrat(Bureaucrat &other);
		~Bureaucrat();
		void Increment();
		void Decrement();
		void signForm(AForm &f);
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