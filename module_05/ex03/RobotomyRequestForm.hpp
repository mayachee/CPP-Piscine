/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:08:39 by mayache-          #+#    #+#             */
/*   Updated: 2024/02/11 22:47:41 by mayache-         ###   ########.fr       */
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
        RobotomyRequestForm(RobotomyRequestForm &obj);
        ~RobotomyRequestForm();

//-------------------------------Getters-------------------------------//
        std::string GetTarget();

//---------------------------Membre function---------------------------//
        void    execute(Bureaucrat const &obj) const;

//-----------------------operators assignement-----------------------//
        RobotomyRequestForm &operator=(RobotomyRequestForm &obj);
};


#endif