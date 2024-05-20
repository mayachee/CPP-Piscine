/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:06:50 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/20 04:03:33 by mayache-         ###   ########.fr       */
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
        Intern(const Intern &other);
        AForm *CreatePresidentialPardonForm(std::string target);
        AForm *CreateShrubberyCreationForm(std::string target);
        AForm *CreateRobotomyRequestForm(std::string target);
        AForm *makeForm(std::string typeform, std::string target);
        Intern &operator=(const Intern &other);
        ~Intern();
};

// array of pointers to member functions
typedef AForm *(Intern::*fct_ptr)(std::string);

#endif