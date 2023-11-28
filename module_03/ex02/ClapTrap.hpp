/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:16:41 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/28 19:12:24 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string const& name);
        ~ClapTrap();
        void attack(std::string const& target);
        void takeDamage(int amount);
        void beRepaired(int amount);
        ClapTrap& operator = (const ClapTrap& other);

    protected:
        std::string name;
        int hitpoints;
        int energyPoints;
        int attackDamage;
};

#endif