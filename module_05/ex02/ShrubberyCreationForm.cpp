/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:08:43 by mayache-          #+#    #+#             */
/*   Updated: 2024/01/16 22:37:54 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("Shrubbery Creation Form", 145, 137), target(target) {}


std::string    ShrubberyCreationForm::getTarget() const
{
    return (target);
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    
    std::string tree = 
        ORANGE_TEXT  "      *\n" RESET_TEXT
        RED_TEXT   "     /|\\\n" RESET_TEXT
        YELLOW_TEXT   "    / | \\\n" RESET_TEXT
        BLUE_TEXT  "   /  |  \\\n" RESET_TEXT
        ORANGE_TEXT  "  /   |   \\\n" RESET_TEXT
        RED_TEXT   " /    |    \\\n" RESET_TEXT
        YELLOW_TEXT "/_____|_____\\\n" RESET_TEXT
        BLUE_TEXT "     | |\n" RESET_TEXT
        ORANGE_TEXT  "    -----      \n" RESET_TEXT;

    if (!this->getSignBoolean())
    {
        file << tree;
        throw(FormNotSigned());

    }
    else if (this->getSignGrade() < executor.getGrade())
    {
        file << tree;
        throw(GradeDontPermit());
    }
    else
    {
        std::ofstream file(this->getTarget() + "_shrubbery");
        if (!file)
        {
            std::cout << "it looks like an error appears while creating the output file" << std::endl;
            return;
        }
        file << tree;
    }
    
    (void) executor;
    if (!this->getSignBoolean())
        throw(FormNotSigned());
    // if (!getIsSigned()) {
    //     throw FormNotSignedException();
    // }

    // if (executor.getGrade() > getExecGrade()) {
    //     throw GradeTooLowException();
    // }

    // std::ofstream outputFile(target + "_shrubbery");
    // if (outputFile.is_open()) {
    //     outputFile << "ASCII trees" << std::endl;
    //     outputFile.close();
    //     std::cout << "ShrubberyCreationForm executed successfully by " << executor.getName() << std::endl;
    // } else {
    //     throw FileOpenErrorException();
    // }
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

