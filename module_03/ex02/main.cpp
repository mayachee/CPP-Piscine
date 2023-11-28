/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:16:49 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/28 20:50:32 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap claptrap("11");
    claptrap.attack("Enemy");

    std::cout << std::endl;

    ScavTrap scavtrap("22");
    scavtrap.attack("john wick");
    scavtrap.guardGate();

    std::cout << std::endl;

    FragTrap fragtrap("33");
    fragtrap.attack("Ragnar");
    fragtrap.highFivesGuys();

    return 0;
}
