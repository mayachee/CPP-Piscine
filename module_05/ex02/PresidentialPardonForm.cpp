/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:16:23 by mayache-          #+#    #+#             */
/*   Updated: 2024/02/06 19:43:54 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//---------------------Construcotrs And Destructors---------------------//
PresidentialPardonForm::PresidentialPardonForm() : AForm("the form", 25, 5)
{
    this->Target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string N): AForm("the form", 25, 5)
{
    this->Target = N;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &obj) : AForm("the form", 25, 5)
{
    *this = obj;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

//-------------------------------Getters-------------------------------//
std::string    PresidentialPardonForm::GetTarget() const
{
    return (Target);
}

//---------------------------Membre function---------------------------//
void    PresidentialPardonForm::execute(Bureaucrat const &bureau) const
{
    if (!this->getIsSigned()) //if the form is not signed 
        throw(FormNotSigned());
    else if (this->getSignGrade() < bureau.getGrade()) //if the bureaucrat's grade isn't high enough
        throw(GradeDontPermit());
    else
        std::cout << this->GetTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

//-----------------------operators assignement-----------------------//
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &obj)
{
    this->Target = obj.Target;
    return *this;
}