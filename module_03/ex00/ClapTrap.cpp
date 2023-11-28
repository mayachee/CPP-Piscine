/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:16:06 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/28 19:28:10 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor has been called" << std::endl;
    this->hitpoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
	this->name = "default";
}

ClapTrap::ClapTrap(std::string const& name)
{
    this->name = name;
    this->hitpoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destroying a ClapTrap named " << name << std::endl;
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

void ClapTrap::takeDamage(int amount)
{
    if (amount <= 0)
        std::cout << "Something Wrong!" << std::endl;
    else if (this->hitpoints <= amount)
    {
        std::cout << "ClapTrap " << name << " is dead!" << std::endl;
    }
    else
    {
        this->hitpoints -= amount;
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(int amount)
{
    if (amount <= 0)
        std::cout << "Something Wrong!" << std::endl;
    else if(this->energyPoints <= 0)
        std::cout << "no enought energy\n";
    else
    {
        this->energyPoints--;
        hitpoints += amount;
        std::cout << "ClapTrap " << name << " is repaired by " << amount << " points!" << std::endl;
    }
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->hitpoints = other.hitpoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}
