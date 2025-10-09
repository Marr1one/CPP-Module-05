/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:48:56 by maissat           #+#    #+#             */
/*   Updated: 2025/10/09 19:59:07 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat 
{
	public:
		Bureaucrat(int grade, std::string name);
		Bureaucrat(Bureaucrat &other);
		~Bureaucrat();
		void Increment();
		void Decrement();
		Bureaucrat &operator=(Bureaucrat &other);
		const std::string name;
		int grade;
		int getGrade(Bureaucrat &b) const;
		std::string getName(Bureaucrat &b) const;
		class GradeTooLowException : public std::exception
		{
			virtual std::string what() throw();
		};

		class GradeTooHighException : public std::exception
		{
			virtual std::string what() throw();
		};
};



#endif