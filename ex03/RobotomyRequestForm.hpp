/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:36:01 by maissat           #+#    #+#             */
/*   Updated: 2026/02/02 14:48:33 by maissat          ###   ########.fr       */
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
		RobotomyRequestForm( std::string &target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
		void  execute(Bureaucrat const & executor) const;
};


#endif