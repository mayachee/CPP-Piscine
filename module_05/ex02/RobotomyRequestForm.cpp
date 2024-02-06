/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:22:34 by mayache-          #+#    #+#             */
/*   Updated: 2024/02/06 19:53:14 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

//---------------------Construcotrs And Destructors---------------------//
RobotomyRequestForm::RobotomyRequestForm() : AForm("Roboto Request form", 72, 45)
{
    this->Target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string N): AForm("Roboto Request form", 72, 45)
{
    this->Target = N;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &obj) : AForm("Roboto Request form", 72, 45)
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
        std::random_device rand;
        std::uniform_int_distribution<int> dist(1,2);
        if (dist(rand) == 1)
            std::cout << this->getName() << " has been robotomized successfully 50% of the time" << std::endl;
        else
            std::cout << "The robotomy failed" << std::endl;
    }
}

//-----------------------operators assignement-----------------------//
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &obj)
{
    this->Target = obj.Target;
    return *this;
}