#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    this->name  = name;
    this->hitpoints = FragTrap::hitpoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "Building a DiamondTrap named " << name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destroying a DiamondTrap named " << name << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap " << name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}