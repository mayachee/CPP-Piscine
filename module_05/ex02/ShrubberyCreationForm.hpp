/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:08:45 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/20 03:56:26 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public AForm {
private:
    std::string target;

public:
    ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm(const ShrubberyCreationForm &obj);
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();

    std::string getTarget() const;

    void execute(Bureaucrat const & executor) const;

    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
};

#endif
