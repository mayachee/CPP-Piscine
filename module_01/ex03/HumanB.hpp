/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:33:40 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/26 22:56:34 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        const Weapon* weapon;

    public:
        HumanB(const std::string& humanName);
        void setWeapon(const Weapon& humanWeapon);
        void attack() const;
        ~HumanB();
        HumanB();
};

#endif