/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:34:20 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/23 20:23:16 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

// int main() {
//     Weapon sword;
//     sword.setType("Swords");
//     HumanA humanA("HumanA", sword);
//     humanA.attack(); // Output: HumanA attacks with his sword
//     std::cout << "Weapon type: " << sword.getType() << std::endl;

//     ////
//     HumanB humanB("HumanB");
//     Weapon aka;
//     aka.setType("AKA 47");
//     humanB.setweapen(&aka);
//     humanB.attack();

//     return 0;
// }

int main()
{
    {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    }
    {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    }
    return 0;
}