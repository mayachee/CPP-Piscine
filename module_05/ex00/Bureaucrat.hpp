/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:42:05 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/27 22:42:06 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <stdexcept>
#include <iostream>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;

    public:
        class GradeTooHighException : public std::exception {
            virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            virtual const char* what() const throw();
        };

        Bureaucrat(const std::string& name, int grade);
        ~Bureaucrat();

        const std::string& getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
