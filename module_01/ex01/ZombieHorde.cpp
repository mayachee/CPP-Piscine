/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:28:11 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/19 19:28:12 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int	i;

	i = -1;
	Zombie* zombies = new Zombie[N];
	while (++i < N)
		zombies[i].setName(name);
	return(zombies);
}