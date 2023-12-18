/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:47:30 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/18 11:47:31 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#define YELLOW_TEXT "\033[38;5;226m"

class Brain
{
    protected:
        std::string ideas[100];

    public:
        Brain();
        ~Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& obj);
        std::string *getIdeas();
        void setIdeas( std::string ideas);
};

#endif