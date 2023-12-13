/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:07 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/13 21:37:41 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#define RED_TEXT "\033[38;5;196m"

class Cat : public Animal {
    private:
        Brain *brn;

    public:
        Cat();
        Cat(const Cat &cpy);
        void makeSound() const;
        std::string	getType();
        Cat& operator=(const Cat& cat);
        ~Cat();
};

#endif