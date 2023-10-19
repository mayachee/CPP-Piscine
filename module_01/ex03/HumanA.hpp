/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:33:45 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/19 19:33:46 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string NAME;
        Weapon& WEAPON_TYPE;
    public:
        void    attack();
        HumanA(std::string NAME, Weapon& WEAPON_TYPE);
        ~HumanA();
};

#endif