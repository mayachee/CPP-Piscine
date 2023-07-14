#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap claptrap("Claptrap");
    claptrap.attack("Enemy");

    std::cout << std::endl;

    ScavTrap scavtrap("Scavtrap");
    scavtrap.attack("Enemy");
    scavtrap.guardGate();

    std::cout << std::endl;

    FragTrap fragtrap("Fragtrap");
    fragtrap.attack("Enemy");
    fragtrap.highFivesGuys();

    return 0;
}
