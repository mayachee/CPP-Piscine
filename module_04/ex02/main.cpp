/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:29:54 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/18 12:29:55 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    // const int arraySize = 10;
    // Animal* animals[arraySize];
    Animal* animals1[2];

        animals1[0] = new Dog();
        animals1[1] = new Cat();

        animals1[0]->makeSound();
        animals1[1]->makeSound();
        delete animals1[0];
        delete animals1[1];

    // for (int i = 0; i < arraySize / 2; i++) {
    //     animals[i] = new Dog();
    // }

    // for (int i = arraySize / 2; i < arraySize; i++) {
    //     animals[i] = new Cat();
    // }

    // for (int i = 0; i < arraySize; i++) {
    //     animals[i]->makeSound();
    //     delete animals[i];
    // }

    return 0;
}
