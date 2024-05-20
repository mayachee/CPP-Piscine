/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:30:10 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/20 03:15:44 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"


class Bureaucrat; // Forward declaration

class Form {
    private:
        std::string name;
        bool isSigned;
        int signGrade;
        int execGrade; // Fix the member name here

    public:
        //-------------Constructors-----------
        Form(const std::string& name, int signGrade, int execGrade);
        Form(const Form &obj);
        Form();

        const std::string& getName() const;
        bool getIsSigned() const;
        int getSignGrade() const;
        int getExecGrade() const;

        void beSigned(const Bureaucrat& bureaucrat);
        void execute(const Bureaucrat& executor);

        class GradeTooHighException : public std::exception {
            virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            virtual const char* what() const throw();
        };
        ~Form();
        Form& operator=(const Form& cpy);


};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif

