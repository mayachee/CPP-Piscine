/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:06:35 by mayache-          #+#    #+#             */
/*   Updated: 2024/02/14 20:03:20 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern(/* args */)
{
}


AForm Intern::*makeForm(std::string typeform, std::string target)
{
    std::string rry[] = {"presidential", "shrubbery", "robotomy"};
    fct_ptr intern_ptr[3] = 
    {
        &Intern::CreatePresidentialPardonForm, 
        &Intern::CreateShrubberyCreationForm, 
        &Intern::CreateRobotomyRequestForm
    };

    for(int x = 0; x < 3; x++)
    {
        if (type.find(rry[x]) != std::string::npos)
        {
            std::cout << "Intern creates " << typeform << std::endl;
            return (this->*intern_ptr[x])(target);
        }
    }
    std::cout << "chi7aja machi hiyahadi" << std::endl;
    return NULL;
}

Intern::~Intern()
{
}