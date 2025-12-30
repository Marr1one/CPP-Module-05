/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:06:04 by root              #+#    #+#             */
/*   Updated: 2025/12/09 16:29:46 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCFORM_HPP
#define SCFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm &other);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &other);
		void  execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm &scf);


#endif