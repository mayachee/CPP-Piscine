#include "HumanB.hpp"

HumanB::HumanB(std::string name) 
{
    this->NAME = name;
}

void HumanB::setweapen(Weapon* WEAPON_TYPE) {
    this->WEAPON_TYPE = WEAPON_TYPE;
}

void HumanB::attack() {
    if (WEAPON_TYPE) {
        std::cout << NAME << " attacks with his " << WEAPON_TYPE->getType() << std::endl;
    } else {
        std::cout << NAME << " attacks with bare hands" << std::endl;
    }
}


HumanB::~HumanB()
{
}