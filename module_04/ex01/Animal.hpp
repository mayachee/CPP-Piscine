/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:20 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/29 19:34:21 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

#define RESET_TEXT "\033[0m"
#define ORANGE_TEXT "\033[38;5;208m"

class Animal {
    protected:
        std::string type;

    public:
        Animal();
        Animal(std::string const& type);
        virtual std::string getType() const;
        virtual void makeSound() const;
        Animal& operator = (const Animal &animal);
        virtual ~Animal();
};

#endif