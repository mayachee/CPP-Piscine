/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:44:18 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/21 11:40:48 by mayache-         ###   ########.fr       */
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

void Harl::HarlFilter(std::string level)
{
    int i = 0;
    int local = -1;
    std::string levels[4]= {"DEBUG", "INFO", "WARNING", "ERROR"};

    while (i < 4)
    {
        if (levels[i] == level)
        {
            local = i;
            break;
        }
        i++;
    }
    switch (local)
    {
        case 0:
            Harl::debug();
        case 1:
            Harl::info();
        case 2:
            Harl::warning();
        case 3:
            Harl::error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
            break;
    }
}

Harl::Harl()
{
}

Harl::~Harl()
{
}