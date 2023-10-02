#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const& name)
{
    this->name = name;
    this->hitpoints = 10;
    this->energyPoints = 10;
    this->hitpoints = 0;
    std::cout << name << "is born!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called for " << name << std::endl;
}

void ClapTrap::attack(std::string const& target)
{
    if(this->energyPoints <= 0)
        std::cout << "no enought energy\n";
    else
    {
        this->energyPoints--;
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitpoints <= amount)
    {
        std::cout << "ClapTrap " << name << " is dead!" << std::endl;
    }
    this->hitpoints -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if(this->energyPoints <= 0)
        std::cout << "no enought energy\n";
    else
    {
        this->energyPoints--;
        hitpoints += amount;
        std::cout << "ClapTrap " << name << " is repaired by " << amount << " points!" << std::endl;
    }
}