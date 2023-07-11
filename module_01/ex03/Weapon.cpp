#include "Weapon.hpp"

std::string const  &Weapon::getType() {
    return Weapon::type = type;
}

void  Weapon::setType(const std::string& newType) {
    type = newType;
}
    
Weapon::Weapon(/* args */)
{

}

Weapon::~Weapon()
{

}