#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamondtrap("Diamondtrap");
    diamondtrap.attack("Enemy");
    diamondtrap.highFivesGuys();
    diamondtrap.guardGate();
    diamondtrap.whoAmI();

    return 0;
}
