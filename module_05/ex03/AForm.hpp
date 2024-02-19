/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 22:15:49 by mayache-          #+#    #+#             */
/*   Updated: 2024/02/19 15:12:45 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

#define ORANGE_TEXT "\033[38;5;208m"
#define RED_TEXT "\033[38;5;196m"
#define YELLOW_TEXT "\033[38;5;226m"
#define BLUE_TEXT "\033[38;5;27m"
#define RESET_TEXT "\033[0m"


class Bureaucrat; // Forward declaration

class AForm {
    private:
        const std::string name;
        bool isSigned;
        int signGrade;
        int execGrade; // Fix the member name here
        
    public:
        AForm(const std::string& name, int signGrade, int execGrade);
        ~AForm();

        const std::string& getName() const;
        bool getIsSigned() const;
        int getSignGrade() const;
        int getExecGrade() const;

        void beSigned(const Bureaucrat& bureaucrat);
        void execute(const Bureaucrat& executor);

        //-------------------------Exceptions classes-------------------------//
        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char *what() const throw();
    
        };

        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char *what() const throw();
    
        };
          
        class   FormNotSigned : public std::exception
        {
            public :
                virtual const char *what() const throw();
        };
        
        class   GradeDontPermit : public std::exception
        {
            public :
                virtual const char *what() const throw();
        };

        class CantSignForm: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif