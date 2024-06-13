/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:15:48 by mayache-          #+#    #+#             */
/*   Updated: 2024/06/13 22:25:14 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP
# define FUNCTIONS_HPP

#include <iostream>

class Functions
{
    private:

    public:
        Functions();
        Functions(Functions const &other);
        Functions &operator=(Functions const &other);
        ~Functions();
};

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min(const T &a, const T &b) {
    return (a < b) ? a : b;
}

template <typename T>
T max(const T &a, const T &b) {
    return (a > b) ? a : b;
}

#endif