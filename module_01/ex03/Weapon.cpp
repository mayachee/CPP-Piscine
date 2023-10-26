/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:33:37 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/26 22:40:15 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// This is the constructor of the "Weapon" class.
Weapon::Weapon(const std::string& weaponType)
{
    this->type = weaponType;
}

// This is the getter of the "Weapon" class.
const std::string& Weapon::getType() const
{
    return this->type;
}

// This is the setter of the "Weapon" class.
void Weapon::setType(const std::string& newType) {
         this->type = newType;
}

// This is the default constructor of the "Weapon" class.
Weapon::Weapon()
{
    this->type = "default";
}

// This is the destructor of the "Weapon" class.
Weapon::~Weapon() {}