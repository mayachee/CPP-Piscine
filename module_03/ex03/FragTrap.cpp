#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "Building a FragTrap named " << name << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destroying a FragTrap named " << name << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " requests a high five! Who's up for it?" << std::endl;
}