/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:16:43 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/28 19:15:41 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "Building a FragTrap named " << name << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
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