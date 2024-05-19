/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:42:05 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/19 02:43:21 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        // const
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
        const std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        //------- Destructor -------
        ~Bureaucrat();
        //-------- Operator assignement----------
        Bureaucrat& operator=(const Bureaucrat& cpy);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
