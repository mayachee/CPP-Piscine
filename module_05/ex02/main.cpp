/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:09:06 by mayache-          #+#    #+#             */
/*   Updated: 2024/02/07 15:37:20 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {

        Bureaucrat bureaucrat("John", 25);
        std::cout << ORANGE_TEXT << "-->" << bureaucrat << RESET_TEXT << std::endl;
        std::cout << "------- Form Shrubbery -------" << std::endl;
        {
            ShrubberyCreationForm shrubberyForm("me");
            std::cout << BLUE_TEXT << "-->" << shrubberyForm << RESET_TEXT << std::endl;
            bureaucrat.signAForm(shrubberyForm);
            shrubberyForm.execute(bureaucrat);
            std::cout << BLUE_TEXT << "-->" << shrubberyForm << RESET_TEXT << std::endl;
        }
        std::cout << "------- Form Roboto -------" << std::endl;
        {
            RobotomyRequestForm robotomyForm("yassine");
            std::cout << RED_TEXT << "-->" << robotomyForm << RESET_TEXT  << std::endl;
            bureaucrat.signAForm(robotomyForm);
            robotomyForm.execute(bureaucrat);
            std::cout << RED_TEXT << "-->" << robotomyForm << RESET_TEXT  << std::endl;
        }
        std::cout << "------- Form  PresidentialPardon -------" << std::endl;
        {
            PresidentialPardonForm pardonForm("sma7lia");
            std::cout << YELLOW_TEXT << "-->" << pardonForm << RESET_TEXT << std::endl;
            bureaucrat.signAForm(pardonForm);
            pardonForm.execute(bureaucrat);
            std::cout << YELLOW_TEXT << "-->" << pardonForm << RESET_TEXT << std::endl;   
        }
    } catch (std::exception const & e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
