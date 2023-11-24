/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:16:28 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/24 21:16:29 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "Building a ScavTrap named " << name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destroying a ScavTrap named " << name << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " enters Gate keeper mode!" << std::endl;
}