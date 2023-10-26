/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:33:42 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/26 23:32:59 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& humanName) : name(humanName), weapon(NULL)
{
}

void HumanB::setWeapon(const Weapon& humanWeapon) {
    weapon = &humanWeapon;
}
    
void HumanB::attack() const
{
    if (weapon == NULL) {
        std::cout << name << " is unarmed" << std::endl;
    }
    else {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }
}

HumanB::~HumanB() {
}

HumanB::HumanB() {}