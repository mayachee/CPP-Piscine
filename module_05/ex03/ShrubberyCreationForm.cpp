/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:08:43 by mayache-          #+#    #+#             */
/*   Updated: 2024/01/18 19:17:06 by mayache-         ###   ########.fr       */
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
    
    if (!this->getSignBoolean())
    {
        throw(FormNotSigned());

    }
    else if (this->getSignGrade() < executor.getGrade())
    {
        throw(GradeDontPermit());
    }
    else
    {
        std::string tree = 
            "      *\n"  
            "     /|\\\n"
            "    / | \\\n"
            "   /  |  \\\n"
            "  /   |   \\\n"  
            " /    |    \\\n"
            "/_____|_____\\\n"
            "     | |\n"
            "    -----      \n";
        std::ofstream file(this->getTarget() + "_shrubbery");
        if (!file)
        {
            std::cout << "it looks like an error appears while creating the output file" << std::endl;
            return;
        }
        file << tree;
    }
    
    // (void) executor;
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

