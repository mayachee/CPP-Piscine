/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:20 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/01 22:26:23 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#define ORANGE_TEXT "\033[38;5;208m"

class Animal {
    protected:
        std::string type;

    public:
        Animal();
        Animal(const Animal &cpy_obj);
        virtual std::string getType() const;
        virtual void makeSound() const;
        virtual ~Animal();
        Animal& operator = (const Animal &animal);
};

#endif