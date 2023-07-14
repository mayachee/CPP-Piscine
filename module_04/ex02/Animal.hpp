#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    public:
        virtual ~Animal();
        virtual void makeSound() const = 0;
};
#endif