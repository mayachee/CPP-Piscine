/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:50:26 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/22 18:13:33 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "./folder/ClassA.hpp"
#include "./folder/ClassB.hpp"
#include "./folder/ClassC.hpp"

Base* generate() {
    srand(static_cast<unsigned int>(time(0)));
    int randNum = rand() % 3;
    switch(randNum) {
        case 0:
            return new ClassA();
        case 1:
            return new ClassB();
        case 2:
            return new ClassC();
        default:
            return nullptr;
    }
}

void identify(Base* p) {
    if (dynamic_cast<ClassA*>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<ClassB*>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<ClassC*>(p)) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Unknown type" << std::endl;
    }
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<ClassA&>(p);
        std::cout << "A" << std::endl;
    } catch (std::bad_cast&) {}
    try {
        (void)dynamic_cast<ClassB&>(p);
        std::cout << "B" << std::endl;
    } catch (std::bad_cast&) {}
    try {
        (void)dynamic_cast<ClassC&>(p);
        std::cout << "C" << std::endl;
    } catch (std::bad_cast&) {}
}

int main() {
    Base* basePtr = generate();
    Base &baseReference = *basePtr;
    identify(basePtr);
    identify(baseReference);
    delete basePtr;
    return 0;
}
