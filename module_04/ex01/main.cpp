/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:59 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/18 13:05:12 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

int main() {
    {
        const Animal* animals[2];
        animals[0] = new Dog();
        animals[1] = new Cat();

        for (int i = 0; i < 2; ++i) {
            delete animals[i];
        }
    }

    // {
    //     const Animal* animals[0];
    //     animals[0] = new Cat();
        
    //     delete animals[0];
    // }

    // system("leaks Animal");
    return 0;
}
