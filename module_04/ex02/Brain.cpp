/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:47:42 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/18 11:47:43 by mayache-         ###   ########.fr       */
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

Brain::~Brain()
{
    // Destructor logic
    std::cout << YELLOW_TEXT << "Brain destroyed." << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    // Assignment operator logic
    std::cout << YELLOW_TEXT << "Assignation operator called" << std::endl;
    (void)other;
    return *this;
}

std::string *Brain::getIdeas()
{
    return this->ideas;
}

void Brain::setIdeas( std::string ideas)
{
    static int i = 0;

    this->ideas[i] = ideas;
    std::cout <<  "---> " << i << " " << this->ideas[i] << " "<< std::endl;
    i++;
    if (i > 100)
    {
        std::cerr << "finish ideas : (((\n";
        exit (1);
    }
}