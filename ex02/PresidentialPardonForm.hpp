/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:14:45 by root              #+#    #+#             */
/*   Updated: 2025/12/09 16:29:39 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PPForm_HPP
#define PPForm_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm &other);
		PresidentialPardonForm &operator=(PresidentialPardonForm &other);
		void  execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &out, PresidentialPardonForm &ppf);

#endif