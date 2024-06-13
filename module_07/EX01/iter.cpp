/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:58:39 by mayache-          #+#    #+#             */
/*   Updated: 2024/06/13 22:35:51 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

Iter::Iter() {}

Iter::Iter(Iter const &other) {
    *this = other;
}

Iter &Iter::operator=(Iter const &other) {
    if (this != &other) {
        *this = other;
    }
    return *this;
}

Iter::~Iter() {}