/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:16:49 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/24 21:16:50 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap claptrap("Claptrap");
    claptrap.attack("Enemy");

    std::cout << std::endl;

    ScavTrap scavtrap("Scavtrap");
    scavtrap.attack("Enemy");
    scavtrap.guardGate();

    std::cout << std::endl;

    FragTrap fragtrap("Fragtrap");
    fragtrap.attack("Enemy");
    fragtrap.highFivesGuys();

    return 0;
}
