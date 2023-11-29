/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:13:36 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/29 16:29:13 by mayache-         ###   ########.fr       */
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
