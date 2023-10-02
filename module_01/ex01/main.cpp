#include "Zombie.hpp"

int main() {
    int numZombies = 5;
    int i = -1;
    std::string baseName = "Zombie";

    Zombie* horde = zombieHorde(numZombies, baseName);

    // Test by calling announce() on each Zombie
    while (++i < numZombies)
        horde[i].announce();

    delete[] horde;  // Deallocate the memory when done

    return 0;
}