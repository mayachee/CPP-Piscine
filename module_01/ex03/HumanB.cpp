/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:33:42 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/19 19:33:43 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) 
{
    this->NAME = name;
}

void HumanB::setweapen(Weapon* WEAPON_TYPE) {
    this->WEAPON_TYPE = WEAPON_TYPE;
}

void HumanB::attack() {
    if (WEAPON_TYPE) {
        std::cout << NAME << " attacks with his " << WEAPON_TYPE->getType() << std::endl;
    } else {
        std::cout << NAME << " attacks with bare hands" << std::endl;
    }
}


HumanB::~HumanB()
{
}