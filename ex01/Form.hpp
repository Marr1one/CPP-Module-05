/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:32:51 by root              #+#    #+#             */
/*   Updated: 2026/01/28 16:14:14 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form 
{
	private :
		const std::string _name;
		bool _is_signed;
		const int _sign_grade;
		const int _exec_grade;
	public:
		Form();
		Form(std::string name, int sign_grade, int exex_grade);
		Form(const Form &other);
		Form &operator=(const Form &other);
		~Form();	
		const std::string getName() const ;
		const int getSign_grade()  const;
		const int getExec_grade()  const;
		const bool getIsSigned()  const;
		void beSigned(Bureaucrat &b);
		class GradeTooHighException : public std::exception 
		{
			const char * what() const throw ();
		};
		class GradeTooLowException : public std::exception 
		{
			const char * what() const throw ();
		};
};

std::ostream &operator<<(std::ostream &out, Form &f);

#endif