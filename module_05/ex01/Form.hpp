/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:30:10 by mayache-          #+#    #+#             */
/*   Updated: 2024/02/17 19:23:40 by mayache-         ###   ########.fr       */
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
        const std::string name;
        bool isSigned;
        int signGrade;
        int execGrade; // Fix the member name here
        
    public:
        class GradeTooHighException : public std::exception {
            virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            virtual const char* what() const throw();
        };

        Form(const std::string& name, int signGrade, int execGrade);
        ~Form();

        const std::string& getName() const;
        bool getIsSigned() const;
        int getSignGrade() const;
        int getExecGrade() const;

        void beSigned(const Bureaucrat& bureaucrat);
        void execute(const Bureaucrat& executor);

};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif

