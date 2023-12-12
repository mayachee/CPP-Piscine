/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:23 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/06 20:09:33 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    // Constructor logic
    std::cout << YELLOW_TEXT << "Brain created." << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << YELLOW_TEXT << "Brain copied." << std::endl;
	*this = other;
}

Brain::~Brain() {
    // Destructor logic
    std::cout << YELLOW_TEXT << "Brain destroyed." << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    // Assignment operator logic
    if (this != &other) {
    std::cout << YELLOW_TEXT << "Assignation operator called" << std::endl;
    //     this->ideas = other.ideas;
        }
    return *this;
}

std::string *Brain::getIdeas()
{
    return this->ideas;
}

void Brain::setIdeas(const std::string *ideas, int max_ideas)
{
    this->ideas = new std::string(*ideas);

    (void)max_ideas;
    // static int i = 0;
    // if (i == 100)
    //     std::cerr << "finish ideas\n";
        // while (i <= max_ideas)
        // {
            // this->ideas[i] = ideas[i];
            // this->ideas = ideas;
        //     std::cout << this->ideas[i] << " "<< std::endl;
        //     i++;
        // }
}

int Brain::copyInteger(int source, int bl) {
    int ddd = 0;
    (void)source;
    if (bl == 0)
        ddd = source;
    
    return ddd;
}