/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:34:29 by mayache-          #+#    #+#             */
/*   Updated: 2023/12/06 20:11:49 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Cat::Cat() : Animal()
// {
//     std::cout << RED_TEXT << "Cat created" << std::endl;
//     Brain myBrain;
//      // Using object, not a pointer
//     // brn.ideas[0] = "I want to kill myself";
//     // Brain *myBrain = new Brain();
//     // std::string idea = "I want to kill myself";
//     std::string *sss =  new std::string("I want to kill myself (Cat)",
//      "I want to kill myself hhhhh (Cat)",
//       "I want to kill myself jj (Cat)");
//     // myBrain.setIdeas("I want to kill myself (Cat)");
//     // myBrain.setIdeas("I want to kill myself  hhhhh (Cat)");
//     myBrain.setIdeas(sss);
//         std::cout << *myBrain.getIdeas() << std::endl; // Display Brain ideas

//     int j = myBrain.copyInteger(0, 1); // Copy integers between indices
//     std::cout << j << " " << std::endl; // Display copied integer
//     // std::cout << *myBrain.getIdeas() << std::endl;

//     // int j = myBrain.copyInteger(0, 1);
//     // std::cout << j  << "  " << std::endl;
    
// }

// Cat::Cat() : Animal()
// {
//     std::cout << RED_TEXT << "Cat created" << std::endl; // Inform of Cat creation
//     Brain myBrain;
//     // Brain *myBrain = new Brain();
//     std::string *sss = {"I want to kill myself (Cat)", "Sss"};
//     myBrain.setIdeas(sss); // Set Cat's brain ideas
//     std::cout << *myBrain.getIdeas() << std::endl; // Print Cat's brain ideas

//     int j = myBrain.copyInteger(0, 1); // Copy integers between brains
//     std::cout << j << " " << std::endl; // Print copied integer
// }

// Creating Cat constructor
Cat::Cat() : Animal()
{
    std::cout << RED_TEXT << "Cat created" << std::endl; // Cat creation alert

    Brain myBrain; // Creating Brain object for Cat


    std::string sss[0] = {"I want to kill myself (Cat)"}; // Setting Cat's brain ideas
    std::string sss[1] = {"ddfffff"}; // Setting Cat's brain ideas
    std::string sss[2] = {"Sss"}; // Setting Cat's brain ideas
    myBrain.setIdeas(sss, 2); // Displaying Cat's brain ideas
    std::cout << *myBrain.getIdeas() << std::endl; // Print Cat's brain ideas
    // int j = myBrain.copyInteger(0, 1); // Copy integers between brains
    // std::cout << j << " " << std::endl; // Print copied integer
}

Cat::Cat(const Cat &cpy) : Animal(cpy)
{
	*this = cpy;
	std::cout << RED_TEXT << "Cat copy constructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << RED_TEXT << "Meow Meow!\n";
}

Cat& Cat::operator=(const Cat& cat)
{
    std::cout << RED_TEXT << "Assignation operator called" << std::endl;
    if (this != &cat)
    {
        this->type = cat.type;
        // this->brain = cat.brain;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << RED_TEXT << "Cat destroyed" << std::endl;
}
