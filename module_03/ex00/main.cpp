#include "ClapTrap.hpp"

int main() {
  ClapTrap clapTrap("Bob");

  clapTrap.attack("Enemy");
  clapTrap.takeDamage(5);
  clapTrap.beRepaired(3);

  return 0;
}
