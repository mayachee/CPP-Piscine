/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:13:33 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/01 21:29:21 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#define BLUE_TEXT "\033[38;5;27m"

class Dog : public Animal {

    public:
        Dog();
        Dog(const Dog &cpy);
        void makeSound() const;
        Dog& operator=(const Dog& cat);
        ~Dog();
};

#endif