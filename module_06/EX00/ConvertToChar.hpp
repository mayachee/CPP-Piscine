/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertToChar.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:31:09 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/07 12:41:16 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTTOCHAR_HPP
#define CONVERTTOCHAR_HPP

#include "ConvertToChar.hpp"
#include <iostream>
#include <math.h>
#include <sstream>

class ConvertToChar
{
    private:

    public:
        // void convertToChar(const std::string str);
        static void convertToChar(const std::string str);
        static char *customStoi(const std::string& str);
        ConvertToChar();
        ~ConvertToChar();
};

#endif // CONVERTTOCHAR_HPP