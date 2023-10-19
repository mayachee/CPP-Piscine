/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:33:47 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/19 19:33:48 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : WEAPON_TYPE(weapon)
{
    this->NAME = name;
}

void HumanA::attack()
{
    std::cout << NAME << " attacks with his " << WEAPON_TYPE.getType() << std::endl;
}

HumanA::~HumanA()
{
}