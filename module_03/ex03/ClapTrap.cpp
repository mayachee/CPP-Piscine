/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:17:01 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/24 21:17:02 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const& name)
{
    this->name = name;
    this->hitpoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 12;
    std::cout << name << "is born!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called for " << name << std::endl;
}

void ClapTrap::attack(std::string const& target)
{
    if(this->energyPoints <= 0)
        std::cout << "no enought energy\n";
    else
    {
        this->energyPoints--;
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitpoints <= (int)amount)
    {
        std::cout << "ClapTrap " << name << " is dead!" << std::endl;
    }
    this->hitpoints -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if(this->energyPoints <= 0)
        std::cout << "no enought energy\n";
    else
    {
        this->energyPoints--;
        hitpoints += amount;
        std::cout << "ClapTrap " << name << " is repaired by " << amount << " points!" << std::endl;
    }
}