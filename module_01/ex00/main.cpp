#include "Zombie.hpp"

int main() {
    Zombie zombie1("Alice");
    zombie1.announce();

    Zombie* zombie2 = newZombie("Bob");
    zombie2->announce();
    delete zombie2;

    randomChump("Charlie");

    return 0;
}