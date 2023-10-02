#include "Brain.hpp"

Brain::Brain() {
    ideas = new std::string[100];
    std::cout << "Brain created" << std::endl;
}

Brain::~Brain() {
    delete[] ideas;
    std::cout << "Brain destroyed" << std::endl;
}