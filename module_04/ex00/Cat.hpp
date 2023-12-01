/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:13:29 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/01 21:11:46 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#define RED_TEXT "\033[38;5;196m"

class Cat : public Animal {

    public:
        Cat();
        Cat(const Cat &cpy);
        void makeSound() const;
        Cat& operator=(const Cat& cat);
        ~Cat();
};

#endif