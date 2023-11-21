/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:18:11 by mayache-          #+#    #+#             */
/*   Updated: 2023/11/18 11:02:43 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int value;
        static const int fractionalBits = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        int getRawBits() const;
        void setRawBits(int const raw);
};


#endif