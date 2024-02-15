/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:06:35 by mayache-          #+#    #+#             */
/*   Updated: 2024/02/15 13:13:28 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(/* args */)
{
}

// Function returns a pointer to a member function of the AFrom Intern class

AForm *Intern::CreateShrubberyCreationForm(std::string target)
{
    return(new ShrubberyCreationForm(target));    
}

AForm *Intern::CreatePresidentialPardonForm(std::string target)
{   
    return (new PresidentialPardonForm(target));
}

AForm *Intern::CreateRobotomyRequestForm(std::string target)
{
    return(new RobotomyRequestForm(target));    
}


AForm *Intern::makeForm(std::string typeform, std::string target)
{
    std::string rry[] = {"presidential", "shrubbery", "robotomy"};
    
    fct_ptr intern_ptr[3] = {
        &Intern::CreatePresidentialPardonForm, 
        &Intern::CreateShrubberyCreationForm, 
        &Intern::CreateRobotomyRequestForm
        };
        
    for(int x = 0; x < 3; x++)
    {
        if (typeform.find(rry[x]) != std::string::npos)
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