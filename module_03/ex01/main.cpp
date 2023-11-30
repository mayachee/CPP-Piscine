/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:16:25 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/30 11:35:08 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("Claptrap");
    claptrap.attack("Enemy");
    
    std::cout << std::endl;
    ScavTrap scavtrap("xxxxx");
    scavtrap.attack("john Wick");
    scavtrap.takeDamage(2);
    scavtrap.beRepaired(3);
    scavtrap.guardGate();

    return 0;
}
