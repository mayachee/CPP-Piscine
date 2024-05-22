/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:58:35 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/22 22:20:38 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename F>
void iter(T* array, int length, F func) {
    for (int i = 0; i < length; ++i) {
        func(array[i]);
    }
}

#endif // ITER_HPP
