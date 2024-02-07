/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:09:06 by mayache-          #+#    #+#             */
/*   Updated: 2024/02/07 15:55:12 by mayache-         ###   ########.fr       */
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

        int choice = 0;
        while (choice != 4) {
            std::cout << "------- Menu -------" << std::endl;
            std::cout << "1. ShrubberyCreationForm" << std::endl;
            std::cout << "2. RobotomyRequestForm" << std::endl;
            std::cout << "3. PresidentialPardonForm" << std::endl;
            std::cout << "4. Exit" << std::endl;
            std::cout << "Enter your choice: ";
            std::cin >> choice;

            switch(choice) {
                case 1: // ShrubberyCreationForm
                {
                    ShrubberyCreationForm shrubberyForm("me");
                    std::cout << BLUE_TEXT << "-->" << shrubberyForm << RESET_TEXT << std::endl;
                    bureaucrat.signAForm(shrubberyForm);
                    shrubberyForm.execute(bureaucrat);
                    std::cout << BLUE_TEXT << "-->" << shrubberyForm << RESET_TEXT << std::endl;
                    break;
                }
                case 2: // RobotomyRequestForm
                {
                    RobotomyRequestForm robotomyForm("yassine");
                    std::cout << RED_TEXT << "-->" << robotomyForm << RESET_TEXT  << std::endl;
                    bureaucrat.signAForm(robotomyForm);
                    robotomyForm.execute(bureaucrat);
                    std::cout << RED_TEXT << "-->" << robotomyForm << RESET_TEXT  << std::endl;
                    break;
                }
                case 3: // PresidentialPardonForm
                {
                    PresidentialPardonForm pardonForm("sma7lia");
                    std::cout << YELLOW_TEXT << "-->" << pardonForm << RESET_TEXT << std::endl;
                    bureaucrat.signAForm(pardonForm);
                    pardonForm.execute(bureaucrat);
                    std::cout << YELLOW_TEXT << "-->" << pardonForm << RESET_TEXT << std::endl;
                    break;
                }
                case 4: // Exit
                    std::cout << "Exiting program..." << std::endl;
                    break;
                default:
                    std::cerr << "Invalid choice, please try again." << std::endl;
            }
        }
    } catch (std::exception const & e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
