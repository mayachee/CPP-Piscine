/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:16:43 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/30 11:36:06 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    this->hitpoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "Building a FragTrap named " << name << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    this->hitpoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "Building a FragTrap named " << name << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destroying a FragTrap named " << name << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " requests a high five! Who's up for it?" << std::endl;
}