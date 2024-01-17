/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:08:34 by mayache-          #+#    #+#             */
/*   Updated: 2024/01/17 18:16:30 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
    private :
        std::string Target;

    public :

//---------------------Construcotrs And Destructors---------------------//
        PresidentialPardonForm();
        PresidentialPardonForm(std::string N);
        PresidentialPardonForm(PresidentialPardonForm &obj);
        ~PresidentialPardonForm();

//-------------------------------Getters-------------------------------//
        std::string GetTarget() const;

//---------------------------Membre function---------------------------//
        void    execute(Bureaucrat const &obj) const;

//-----------------------operators assignement-----------------------//
        PresidentialPardonForm &operator=(PresidentialPardonForm &obj);
};

#endif