/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:09:06 by mayache-          #+#    #+#             */
/*   Updated: 2024/01/16 22:35:54 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat bureaucrat("John", 145); // Adjust grade as needed
        ShrubberyCreationForm shrubberyForm("home");
        // RobotomyRequestForm robotomyForm("target");
        // PresidentialPardonForm pardonForm("target");

        shrubberyForm.beSigned(bureaucrat);
        shrubberyForm.execute(bureaucrat);
        // robotomyForm.beSigned(bureaucrat);
        // pardonForm.beSigned(bureaucrat);

        bureaucrat.signAForm(shrubberyForm);
        // bureaucrat.executeForm(robotomyForm);
        // bureaucrat.executeForm(pardonForm);
    } catch (std::exception const & e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
