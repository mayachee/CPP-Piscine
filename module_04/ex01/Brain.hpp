/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:26 by mayache-          #+#    #+#             */
/*   Updated: 2024/01/12 21:23:29 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#define YELLOW_TEXT "\033[38;5;226m"

class Brain
{
    public:
        std::string ideas[100];

        Brain();
        ~Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& obj);
        std::string *getIdeas();
        void setIdeas( std::string ideas);
};

#endif