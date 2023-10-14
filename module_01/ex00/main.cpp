/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 20:34:48 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/14 20:34:49 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie zombie1("Alice");
    zombie1.announce();

    Zombie* zombie2 = newZombie("Bob");
    zombie2->announce();
    delete zombie2;

    randomChump("Charlie");

    return 0;
}