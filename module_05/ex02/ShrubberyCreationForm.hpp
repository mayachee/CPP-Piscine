/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:08:45 by mayache-          #+#    #+#             */
/*   Updated: 2024/02/07 12:55:15 by mayache-         ###   ########.fr       */
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
    const std::string target;

public:
    ShrubberyCreationForm(const std::string& target);

     std::string getTarget() const;
    virtual ~ShrubberyCreationForm();

    virtual void execute(Bureaucrat const & executor) const;
};

#endif
