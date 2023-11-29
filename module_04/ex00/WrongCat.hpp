/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:13:46 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/29 16:28:42 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

#define PEACH_TEXT "\033[38;5;203m"


class WrongCat : public WrongAnimal 
{
    public:
        WrongCat();
        WrongCat(std::string const& type);
        std::string	getType() const;
        void makeSound() const;
        ~WrongCat();
        WrongCat& operator=(const WrongCat &wrongcat);
};
#endif