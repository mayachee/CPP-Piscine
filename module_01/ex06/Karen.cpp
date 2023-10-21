/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:44:18 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/21 11:40:48 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug() {
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info() {
    std::cout << "I cannot believe adding extra bacon costs more money. You don't put enough! If you did, I would not have to ask for it!" << std::endl;
}

void Karen::warning() {
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error() {
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}


void Karen::KeranFilter(std::string level)
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
            Karen::debug();
        case 1:
            Karen::info();
        case 2:
            Karen::warning();
        case 3:
            Karen::error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
            break;
    }
}

Karen::Karen()
{

}

Karen::~Karen()
{

}