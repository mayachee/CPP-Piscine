/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:16:12 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/27 11:48:44 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
  ClapTrap clapTrap("Bob");

  clapTrap.attack("Enemy");
  clapTrap.takeDamage(5);
  clapTrap.takeDamage(5);
  clapTrap.takeDamage(5);
  clapTrap.beRepaired(3);

  return 0;
}
