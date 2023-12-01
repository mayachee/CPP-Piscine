/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:13:36 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/01 19:47:03 by mayache-         ###   ########.fr       */
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
        // Create an Animal object
        const Animal *originalAnimal = new Animal();
        originalAnimal->makeSound();  // Make a sound

        // Use the copy constructor to create a new Animal object by copying the originalAnimal
        const Animal *copiedAnimal = new Animal(*originalAnimal);

        // You can now use the copiedAnimal as a copy of the originalAnimal
        copiedAnimal->makeSound();  // Make a sound using the copiedAnimal

        // Don't forget to delete dynamically allocated objects
        delete originalAnimal;
        delete copiedAnimal;
        std::cout << std::endl;
        std::cout << std::endl;

    }
    {
        const Animal* meta = new Animal();
        const Animal* dog = new Dog();
        const Animal* cat = new Cat();
        std::cout << RED_TEXT << cat->getType() << " ." << std::endl;
        std::cout << BLUE_TEXT << dog->getType() << " ." << std::endl;
        std::cout << ORANGE_TEXT << meta->getType() << " ." << RESET_TEXT << std::endl;
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

        std::cout <<SNORKEL_BLUE_TEXT <<  wrongAni->getType() << " ." << std::endl;
        std::cout << SNORKEL_BLUE_TEXT << "makeSound WrongAnimal." << std::endl;
        wrongAni->makeSound();
        std::cout << PEACH_TEXT << "makeSound WrongCat." << std::endl;
        wrongcat->makeSound();

        delete wrongcat;
        delete wrongAni;
    }
    return 0;
}
