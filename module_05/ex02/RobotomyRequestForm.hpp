/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:08:39 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/20 03:46:13 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"
#include <random>
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
    private :
        std::string Target;
        
    public :

//---------------------Construcotrs And Destructors---------------------//
        RobotomyRequestForm();
        RobotomyRequestForm(std::string N);
        RobotomyRequestForm(const RobotomyRequestForm &obj);
        ~RobotomyRequestForm();

//-------------------------------Getters-------------------------------//
        std::string GetTarget();

//---------------------------Membre function---------------------------//
        void    execute(Bureaucrat const &obj) const;

//-----------------------operators assignement-----------------------//
        RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
};

#endif