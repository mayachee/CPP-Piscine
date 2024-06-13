/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:21:40 by mayache-          #+#    #+#             */
/*   Updated: 2024/06/13 22:23:50 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

Functions::Functions() {}

Functions::Functions(Functions const &other)
{
    *this = other;
}

Functions &Functions::operator=(Functions const &other) {
    if (this != &other) {
        *this = other;
    }
    return *this;
}

Functions::~Functions() {}