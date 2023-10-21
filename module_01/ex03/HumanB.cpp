/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:33:42 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/21 13:42:54 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& humanName) : name(humanName), weapon(nullptr) {}

void HumanB::setWeapon(const Weapon& humanWeapon) {
    if (weapon) {
        delete weapon; // Clean up the previous weapon to avoid memory leaks
    }
    weapon = new Weapon(humanWeapon);
}
    
void HumanB::attack() const {
    if (weapon) {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    } else {
        std::cout << name << " attacks unarmed" << std::endl;
    }
}

HumanB::~HumanB() {
    if (weapon) {
        delete weapon; // Clean up the weapon in the destructor to avoid memory leaks
    }
}