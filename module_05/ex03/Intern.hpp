/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:06:50 by mayache-          #+#    #+#             */
/*   Updated: 2024/02/15 12:03:16 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        AForm *CreatePresidentialPardonForm(std::string target);
        AForm *CreateShrubberyCreationForm(std::string target);
        AForm *CreateRobotomyRequestForm(std::string target);
        ~Intern();
        AForm *makeForm(std::string typeform, std::string target);
};

typedef AForm *(Intern::*fct_ptr)(std::string);

#endif