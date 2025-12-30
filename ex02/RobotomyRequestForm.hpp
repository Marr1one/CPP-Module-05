/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:36:01 by maissat           #+#    #+#             */
/*   Updated: 2025/12/09 16:28:16 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RRForm_HPP
#define RRForm_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm &other);
		RobotomyRequestForm &operator=(RobotomyRequestForm &other);
		void  execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm &Rrf);

#endif