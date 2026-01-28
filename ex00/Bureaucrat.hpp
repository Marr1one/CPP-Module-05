/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:48:56 by maissat           #+#    #+#             */
/*   Updated: 2026/01/28 16:13:10 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat 
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(int grade, std::string name);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();
		void Increment();
		void Decrement();
		Bureaucrat &operator=(const Bureaucrat &other);
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