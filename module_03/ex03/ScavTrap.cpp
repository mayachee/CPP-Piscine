#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "Building a ScavTrap named " << name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destroying a ScavTrap named " << name << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " enters Gate keeper mode!" << std::endl;
}