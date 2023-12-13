/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:59 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/13 21:55:56 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

int main() {
    {
        const Animal* animals[4];
        animals[0] = new Dog();
        animals[1] = new Cat();
        animals[2] = new Dog();
        animals[3] = new Cat();

        for (int i = 0; i < 4; ++i) {
            delete animals[i];
        }
    }

    {
        std::cout <<  "--->  ---->" << std::endl;
        const Animal* animals[0];
        animals[0] = new Cat();

        // for (int i = 0; i < 4; ++i) {
            delete animals[0];
        // }
    }

    // system("leaks ex01");
    return 0;
}
