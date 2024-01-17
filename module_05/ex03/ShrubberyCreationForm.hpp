/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:08:45 by mayache-          #+#    #+#             */
/*   Updated: 2024/01/16 22:28:17 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>
#define ORANGE_TEXT "\033[38;5;208m"
#define RED_TEXT "\033[38;5;196m"
#define YELLOW_TEXT "\033[38;5;226m"
#define BLUE_TEXT "\033[38;5;27m"
#define RESET_TEXT "\033[0m"

#include "Bureaucrat.hpp"



class Bureaucrat;

class ShrubberyCreationForm : public AForm {
private:
    const std::string target;

public:
    ShrubberyCreationForm(const std::string& target);

     std::string getTarget() const;
    virtual ~ShrubberyCreationForm();

    virtual void execute(Bureaucrat const & executor) const;
};

#endif
