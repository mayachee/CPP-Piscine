#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : WEAPON_TYPE(weapon)
{
    this->NAME = name;
}

void HumanA::attack()
{
    std::cout << NAME << " attacks with his " << WEAPON_TYPE.getType() << std::endl;
}

HumanA::~HumanA()
{
}