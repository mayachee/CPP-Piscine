/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 22:15:49 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/20 03:39:09 by mayache-         ###   ########.fr       */
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

//abstract class
class AForm {
    private:
        std::string name;
        bool isSigned;
        int signGrade;
        int execGrade;
        
    public:
        AForm(const std::string& name, int signGrade, int execGrade);
        AForm(const AForm &copy);
        virtual ~AForm();

        virtual const std::string& getName() const;
        virtual bool getIsSigned() const;
        virtual int getSignGrade() const;
        virtual int getExecGrade() const;

        void beSigned(const Bureaucrat& bureaucrat);
        virtual void execute(const Bureaucrat& executor) const = 0;

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
        AForm& operator=(const AForm& cpy);
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif