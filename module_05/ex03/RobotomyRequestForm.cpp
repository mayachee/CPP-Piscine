/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:22:34 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/20 03:46:24 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//---------------------Construcotrs And Destructors---------------------//
RobotomyRequestForm::RobotomyRequestForm() : AForm("Roboto", 72, 45)
{
    this->Target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string N): AForm("Roboto", 72, 45)
{
    this->Target = N;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm("Roboto", 72, 45)
{
    *this = obj;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

//-------------------------------Getters-------------------------------//
std::string    RobotomyRequestForm::GetTarget()
{
    return (Target);
}

//---------------------------Membre function---------------------------//
void    RobotomyRequestForm::execute(Bureaucrat const &bureau) const
{
    if (!this->getIsSigned())
        throw(FormNotSigned());
    else if (this->getSignGrade() < bureau.getGrade())
        throw(GradeDontPermit());
    else
    {
        std::cout << "Occurrence of some drilling noises" << std::endl;
        srand(time(0));
        if (rand() % 2 == 0)
            std::cout << this->getName() << " has been robotomized successfully 50% of the time" << std::endl;
        else
            std::cout << "The robotomy failed" << std::endl;
    }
}

//-----------------------operators assignement-----------------------//
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    this->Target = obj.Target;
    return *this;
}