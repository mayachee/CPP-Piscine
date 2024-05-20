/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:42:08 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/19 18:58:27 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//-------------------Start Constructors---------------------------

Bureaucrat::Bureaucrat() : name("deault")
{
    std::cout << "Default constructor has been called" << std::endl;
    this->grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bur)
{
    std::cout << "Bureaucrat copy constructor has been called" << std::endl;
    *this = bur;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name) {
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        this->grade = grade;
}
//-------------------End Constructors-----------------------

//--------------------- Start Exceptions--------------------
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

//--------------------- End Exceptions--------------------

//----------------- Start Operator assignement-------------------
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bur)
{
    std::cout << "Assignation operator called" << std::endl;
    this->name = bur.name;
    this->grade = bur.grade;

    return *this;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}

//----------------- End Operator assignement-------------------

//------------- Start Grade Increment and Decrement------------
const std::string Bureaucrat::getName() const {
    return this->name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::incrementGrade() {
    if (grade > 1)
        grade--;
    else
        throw GradeTooHighException();
}

void Bureaucrat::decrementGrade() {
    if (grade < 150)
        grade++;
    else
        throw GradeTooLowException();
}

//------------- End Grade Increment and Decrement------------

//---------------------- Start Destructor-------------------------

Bureaucrat::~Bureaucrat() {}

//---------------------- End Destructor-------------------------