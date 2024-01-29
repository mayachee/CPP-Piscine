/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:09:06 by mayache-          #+#    #+#             */
/*   Updated: 2024/01/29 17:59:34 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat bureaucrat("John", 25); // Adjust grade as needed
        ShrubberyCreationForm shrubberyForm("home");
        RobotomyRequestForm robotomyForm("yassine");
        PresidentialPardonForm pardonForm("ayache");

        shrubberyForm.beSigned(bureaucrat);
        shrubberyForm.execute(bureaucrat);
        robotomyForm.beSigned(bureaucrat);
        pardonForm.beSigned(bureaucrat);

        bureaucrat.signAForm(shrubberyForm);
        bureaucrat.signAForm(robotomyForm);
        bureaucrat.signAForm(pardonForm);
    } catch (std::exception const & e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
