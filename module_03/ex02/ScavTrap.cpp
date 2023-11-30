/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:16:52 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/30 11:35:40 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->name = name;
    this->hitpoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "Building a ScavTrap named " << name << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    this->name = name;
    this->hitpoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "Building a ScavTrap named " << name << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " enters Gate keeper mode!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destroying a ScavTrap named " << name << std::endl;
}

void ScavTrap::attack(std::string const& target)
{
    if(this->energyPoints <= 0)
        std::cout << "no enought energy\n";
    else
    {
        this->energyPoints--;
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    }
}