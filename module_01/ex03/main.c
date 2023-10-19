/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:34:20 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/19 19:35:43 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    Weapon sword;
    sword.setType("Swords");
    HumanA humanA("HumanA", sword);
    humanA.attack(); // Output: HumanA attacks with his sword
    std::cout << "Weapon type: " << sword.getType() << std::endl;

    ////
    HumanB humanB("HumanB");
    Weapon aka;
    aka.setType("AKA 47");
    humanB.setweapen(&aka);
    humanB.attack();

    return 0;
}