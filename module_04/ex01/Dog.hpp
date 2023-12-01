/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:56 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/01 22:09:28 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#define BLUE_TEXT "\033[38;5;27m"

class Dog : public Animal {
    private:
        Brain brain;

    public:
        Dog();
        Dog(const Dog &cpy);
        void makeSound() const;
        Dog& operator=(const Dog& cat);
        ~Dog();
};

#endif