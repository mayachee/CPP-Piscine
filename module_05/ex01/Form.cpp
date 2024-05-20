/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:30:00 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/20 03:09:53 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Form member function implementations

Form::Form(const std::string& name, int signGrade, int execGrade)
    : name(name), isSigned(false), signGrade(signGrade), execGrade(execGrade) {
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    else if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &obj)
{
    *this = obj;
}

Form::Form() : name("default"), isSigned(150), execGrade(150)
{
    signGrade = false;
}

const std::string& Form::getName() const {
    return this->name;
}

bool Form::getIsSigned() const {
    return this->isSigned;
}

int Form::getSignGrade() const {
    return this->signGrade;
}

int Form::getExecGrade() const {
    return this->execGrade;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {    
    if (bureaucrat.getGrade() <= signGrade)
        isSigned = true;
    else
        throw GradeTooLowException();
}

void Form::execute(const Bureaucrat& executor) {
    if (!isSigned)
        std::cout << executor.getName() << " couldn't execute " << name << " because it's not signed." << std::endl;
    else if (executor.getGrade() > execGrade)
        std::cout << executor.getName() << " couldn't execute " << name << " because grade is too low." << std::endl;
    else
        std::cout << executor.getName() << " executed " << name << "." << std::endl;
}

// Define GradeTooHighException and GradeTooLowException

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

//-------- Operator assignement----------
Form& Form::operator=(const Form& frm)
{
    std::cout << "Assignation operator called" << std::endl;
    this->name = frm.name;
    this->isSigned = frm.isSigned;
    this->signGrade = frm.signGrade;
    this->execGrade = frm.execGrade;

    return *this;
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << "Form: " << form.getName() << ", Sign Grade: " << form.getSignGrade() << ", Exec Grade: " << form.getExecGrade() << ", Signed: " << (form.getIsSigned() ? "Yes" : "No");
    return os;
}

//              Destructor

Form::~Form() {}