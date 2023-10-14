/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:40:52 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/14 16:59:40 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

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

std::string Contact::getPhone_Number()
{
  return this->Phone_Number;
}   

void  Contact::setFirst_Name(std::string First_Name) {
  this->First_Name = First_Name;
}

void  Contact::setLast_Name(std::string Last_Name) {
  this->Last_Name = Last_Name;
}

void  Contact::setNick_Name(std::string Nick_Name) {
 this->Nick_Name = Nick_Name;
}

void  Contact::setDrakest_Secret(std::string Drakest_Secret) {
  this->Drakest_Secret = Drakest_Secret;
}

void  Contact::setPhone_Number(std::string Phone_Number) {
  this->Phone_Number = Phone_Number;
}

Contact::Contact()
{
}

Contact::~Contact()
{
}

