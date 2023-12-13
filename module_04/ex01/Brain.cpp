/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:23 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/13 22:02:02 by mayache-         ###   ########.fr       */
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

void Brain::setIdeas( std::string ideas, int number_of_ideas)
{
    static int i = 0;
    int j = number_of_ideas;
    std::cout <<  "---> " << j << "->" << " "<< std::endl;
    
    if (number_of_ideas > 100)
        std::cerr << "finish ideas\n";
    while (i < number_of_ideas)
    {
        this->ideas[i] = ideas;
        std::cout <<  "---> " << i << " " << this->ideas[i] << " "<< std::endl;
        if (i > 100)
            std::cerr << "finish ideas      :))\n";
        i++;
    }
    if (i > 100)
        std::cerr << "finish ideas : (((\n";
    i = 0;
}