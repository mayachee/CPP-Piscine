/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:13:43 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/29 16:29:03 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << PEACH_TEXT << "WrongCat Constructor\n";
}

WrongCat::WrongCat(std::string const& type) {
    this->type = type;
    std::cout << PEACH_TEXT << "WrongCat Constructor\n";
}

std::string	WrongCat::getType() const
{
	return (type);
}
// Overrides the makeSound function of WrongAnimal
void WrongCat::makeSound() const  {
    std::cout << PEACH_TEXT << "WrongCat Sound\n";
}
WrongCat::~WrongCat()  {
    std::cout << PEACH_TEXT << "WrongCat Destructor\n";
}

WrongCat& WrongCat::operator=(const WrongCat& wrongcat)
{
    std::cout << PEACH_TEXT << "Assignation operator called" << std::endl;
    if (this != &wrongcat)
    {
        this->type = wrongcat.type;
    }
    return *this;
}