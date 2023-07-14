#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("Claptrap");
    claptrap.attack("Enemy");

    std::cout << std::endl;
    ScavTrap scavtrap("Scavtrap");
    scavtrap.attack("Enemy");
    scavtrap.guardGate();

    return 0;
}
