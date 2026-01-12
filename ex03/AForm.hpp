/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:55:53 by root              #+#    #+#             */
/*   Updated: 2026/01/12 17:24:55 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"


class Bureaucrat;

class AForm 
{
	private :
		const std::string _name;
		bool _is_signed = false;
		const int _sign_grade;
		const int _exec_grade;
	public:
		AForm();
		AForm(std::string name, int sign_grade, int exex_grade);
		AForm(AForm &other);
		AForm &operator=(AForm &other);
		~AForm();	
		const std::string getName() const ;
		const int getSign_grade()  const;
		const int getExec_grade()  const;
		const bool getIsSigned()  const;
		virtual void beSigned(Bureaucrat &b);
		void  virtual execute(Bureaucrat const & executor) const = 0;
		class GradeTooHighException : public std::exception 
		{
			 const char * what() const throw ();
		};
		class GradeTooLowException : public std::exception 
		{
			 const char * what() const throw ();
		};
};

std::ostream &operator<<(std::ostream &out, AForm &f);

#endif