/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:13:41 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/29 16:26:56 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

#define SNORKEL_BLUE_TEXT "\033[38;2;0;121;167m"

class WrongAnimal
{
	protected :
		std::string type;

    public:
        WrongAnimal();
        WrongAnimal(std::string const& type);
        void makeSound() const;
        virtual ~WrongAnimal();
        virtual  std::string getType() const;
        WrongAnimal& operator=(const WrongAnimal &wronganimal);
};

#endif