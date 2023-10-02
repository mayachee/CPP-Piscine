#include "Karen.hpp"
void Karen::debug() {
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info() {
    std::cout << "I cannot believe adding extra bacon costs more money. You don’t put enough! If you did, I would not have to ask for it!" << std::endl;
}

void Karen::warning() {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error() {
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
    std:: string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Karen::*pck[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    int i = 0;
    while(lvls)
    {
        if (lvls[i] == level)
        {
            (this->*pck[i])();
            break;
        }
        i++;
    }
}

Karen::Karen()
{

}
Karen::~Karen()
{

}
