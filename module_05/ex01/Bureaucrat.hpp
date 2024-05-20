/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:42:05 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/20 02:58:12 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form; // Forward declaration

class Bureaucrat
{
    private:
        std::string name;
        int grade;

    public:
        //-------------Constructors-----------
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat &bur);
        Bureaucrat();
        //-------------- Exceptions------------
        class GradeTooHighException : public std::exception {
            virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            virtual const char* what() const throw();
        };
        //-------- Grade Increment and Decrement-------
        const std::string& getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        //------- Destructor -------
        ~Bureaucrat();
        //-------- Operator assignement----------
        Bureaucrat& operator=(const Bureaucrat& cpy);

        void signForm(Form& form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
