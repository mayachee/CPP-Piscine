/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:59 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/29 19:35:00 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* animals[4];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    for (int i = 0; i < 4; ++i) {
        delete animals[i];
    }

    return 0;
}

// int main() {
//     const int arraySize = 10;
//     Animal* animals[arraySize];

//     for (int i = 0; i < arraySize / 2; i++) {
//         animals[i] = new Dog();
//     }

//     for (int i = arraySize / 2; i < arraySize; i++) {
//         animals[i] = new Cat();
//     }

//     for (int i = 0; i < arraySize; i++) {
//         delete animals[i];
//     }

//     return 0;
// }
