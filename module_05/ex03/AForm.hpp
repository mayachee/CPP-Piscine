/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 22:15:49 by mayache-          #+#    #+#             */
/*   Updated: 2024/01/16 22:17:47 by mayache-         ###   ########.fr       */
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


class Bureaucrat; 

class AForm 
{
    private :
        const std::string name;
        bool signd;
        const int gradeToSign;
        const int gradeToExecute;

    public :
//--------------------Construcotrs And Destructors--------------------//
        AForm();
        AForm(std::string N, int Gs, int Ge);
        AForm(AForm &obj);
        virtual ~AForm();

//-------------------------------Getters-------------------------------//
        virtual std::string getName() const;
        virtual bool        getSignBoolean() const;
        virtual int         getSignGrade() const;
        virtual int         getExecuteGrade() const;

//--------------------------Membre functions--------------------------//
        virtual void    beSigned(Bureaucrat &obj);

        virtual void    execute(Bureaucrat const & executor) const = 0;


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

//---------------------copy operator assignement---------------------//
        AForm &operator=(AForm &obj);

};

std::ostream & operator<<( std::ostream & o, const AForm & rhs);

#endif