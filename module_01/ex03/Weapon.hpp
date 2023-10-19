/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:33:28 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/19 19:34:49 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

// #include <iostream>

class Weapon
{
    private:
        std::string type;

    public:
        std::string const &getType();
        void    setType(const std::string& newType);
        Weapon(/* args */);
        ~Weapon();
};

#endif