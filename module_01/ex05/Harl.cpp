/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:24:28 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/24 14:06:39 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug() {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{

    std:: string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*pck[4])();
    pck[0] = &Harl::debug;
    pck[1] = &Harl::info;
    pck[2] = &Harl::warning;
    pck[3] = &Harl::error;
    int i = 0;
    while(i < 4)
    {
        if (lvls[i] == level)
        {
            (this->*pck[i])();
            break;
        }
        i++;
    }
}

Harl::Harl()
{
}
Harl::~Harl()
{
}
