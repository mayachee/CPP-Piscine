/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:26 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/06 20:06:05 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#define YELLOW_TEXT "\033[38;5;226m"

class Brain
{
    protected:
        std::string *ideas;

    public:
        Brain();
        ~Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& obj);
        int copyInteger(int source, int bl);
        std::string *getIdeas();
        void setIdeas(const std::string *ideas, int max_ideas);
};

#endif