/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:33:40 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/19 19:33:41 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string NAME;
        Weapon*     WEAPON_TYPE;
    public:
        void setweapen(Weapon* WEAPON_TYPE);
        void attack();
        HumanB(std::string NAME);
        ~HumanB();
};

#endif