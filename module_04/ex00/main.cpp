/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:13:36 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/04 15:21:22 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    {
        const Animal *originalAnimal = new Animal();
        originalAnimal->makeSound();

        const Animal *copiedAnimal = new Animal(*originalAnimal);
        copiedAnimal->makeSound();

        delete originalAnimal;
        delete copiedAnimal;
        std::cout << std::endl;
        std::cout << std::endl;
    }
    {
        const Animal* meta = new Animal();
        const Animal* dog = new Dog();
        const Animal* cat = new Cat();
        std::cout << RED_TEXT << cat->getType() << "." << std::endl;
        std::cout << BLUE_TEXT << dog->getType() << "." << std::endl;
        std::cout << ORANGE_TEXT << meta->getType() << "." << std::endl;
        dog->makeSound();
        cat->makeSound();
        meta->makeSound();

        delete meta;
        delete dog;
        delete cat;
    }
    {
        std::cout << std::endl;
        const WrongAnimal* wrongAni = new WrongAnimal();
        const WrongAnimal* wrongcat = new WrongCat();

        std::cout <<SNORKEL_BLUE_TEXT <<  wrongAni->getType() << "." << std::endl;
        std::cout << SNORKEL_BLUE_TEXT << "makeSound WrongAnimal." << std::endl;
        wrongAni->makeSound();
        std::cout << PEACH_TEXT << "makeSound WrongCat." << std::endl;
        wrongcat->makeSound();

        delete wrongcat;
        delete wrongAni;
    }
    return 0;
}
