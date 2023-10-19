/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:33:37 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/19 19:33:37 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string const  &Weapon::getType() {
    return Weapon::type = type;
}

void  Weapon::setType(const std::string& newType) {
    type = newType;
}
    
Weapon::Weapon(/* args */)
{

}

Weapon::~Weapon()
{

}