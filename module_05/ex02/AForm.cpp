/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 22:15:23 by mayache-          #+#    #+#             */
/*   Updated: 2024/01/16 22:18:57 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//--------------------Construcotrs And Destructors--------------------//

AForm::AForm() : name("default"), gradeToSign(1), gradeToExecute(1)
{
    signd = false;
}

AForm::AForm(std::string N, int Gs, int Ge) : name(N), gradeToSign(Gs), gradeToExecute(Ge)
{
    this->signd = false;
    if (this->gradeToExecute > 150 || this->gradeToSign > 150)
        throw(GradeTooLowException());
    if (this->gradeToExecute < 1 || this->gradeToSign < 1)
        throw(GradeTooHighException());
}

AForm::AForm(AForm &obj) : name(obj.name), gradeToSign(obj.gradeToSign), gradeToExecute(obj.gradeToExecute)
{
    *this = obj;
}

AForm::~AForm()
{
}

//-------------------------------Getters-------------------------------//

bool        AForm::getSignBoolean() const
{
    return (this->signd);
}

int         AForm::getSignGrade() const
{
    return (this->gradeToSign);
}

int         AForm::getExecuteGrade() const
{
    return (this->gradeToExecute);
}

std::string AForm::getName() const
{
    return (this->name);
}

//--------------------------Membre function--------------------------//

void    AForm::beSigned(Bureaucrat &obj)
{
    if (this->getSignGrade() >= obj.getGrade()) // this mean that the grade of the bureancrat is greater and higher that the grade of the form
        this->signd = true;
    else
        throw(AForm::CantSignForm());
}

//-------------------------Exceptions functions-------------------------//

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("It seems that you entered a grade higher than the bounds");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("It seems that you entered a grade lower than the bounds");
}

const char *AForm::FormNotSigned::what() const throw()
{
    return ("It seems that the form isn't signed");
}

const char *AForm::GradeDontPermit::what() const throw()
{
    return ("It seems that the grade of the bureaucrat dont permit to sing the form");
}

const char *AForm::CantSignForm::what() const throw()
{
    return ("That Form cant be signed by that Bureaucrat");
}

//---------------------operators assignement---------------------//

AForm &AForm::operator=(AForm &obj)
{
    this->signd = obj.signd;
    return *this;
}

std::ostream & operator<<( std::ostream & o, const AForm & rhs)
{
    std::string TF;
    if (rhs.getSignBoolean())
        TF = "True";
    else
        TF = "False";
	o << "AForm " << rhs.getName() << " has a signing grade of " << rhs.getSignGrade()
    << " and an execution grade of " << rhs.getExecuteGrade() << " and the signed boolean is " << TF;
	return (o);
}