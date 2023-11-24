/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:17:21 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/24 21:17:22 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamondtrap("Diamondtrap");
    diamondtrap.attack("Enemy");
    diamondtrap.highFivesGuys();
    diamondtrap.guardGate();
    diamondtrap.whoAmI();

    return 0;
}
