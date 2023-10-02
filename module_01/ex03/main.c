#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    Weapon sword;
    sword.setType("Swords");
    HumanA humanA("HumanA", sword);
    humanA.attack(); // Output: HumanA attacks with his sword
    std::cout << "Weapon type: " << sword.getType() << std::endl;

    ////
    HumanB humanB("HumanB");
    Weapon aka;
    aka.setType("AKA 47");
    humanB.setweapen(&aka);
    humanB.attack();

    return 0;
}