/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:40:52 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/14 13:00:27 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::setinfo(std::string First_Name, std::string Last_Name, 
    std::string Nick_Name, std::string Drakest_Secret, std::string Phone_Number) 
    {
        this->First_Name = First_Name;
        this->Last_Name = Last_Name;
        this->Nick_Name = Nick_Name;
        this->Drakest_Secret = Drakest_Secret;
        this->Phone_Number = Phone_Number;
}

std::string Contact::getFirst_Name()
{
  return this->First_Name;
}

std::string Contact::getLast_Name()
{
  return this->Last_Name;
}

std::string Contact::getNick_Name()
{
  return this->Nick_Name;
}

std::string Contact::getDrakest_Secret()
{
  return this->Drakest_Secret;
}

std::string Contact::getDrakest_Secret()
{
  return this->Drakest_Secret;
}

std::string Contact::getPhone_Number()
{
  return this->Phone_Number;
}   

Contact::Contact()
{
}

Contact::~Contact()
{
}

