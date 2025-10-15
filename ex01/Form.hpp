/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:32:51 by root              #+#    #+#             */
/*   Updated: 2025/10/16 01:45:18 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form 
{
	private :
		const std::string name;
		bool is_signed = false;
		const int sign_grade;
		const int exec_grade;
	public:
		Form();
		Form(std::string name, int sign_grade, int exex_grade);
		Form(Form &other);
		Form &operator=(Form &other);
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