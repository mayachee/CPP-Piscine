#include "Character.hpp"

Character::Character(std::string const &name) : name(name)
{
    for (int i = 0; i < 4; ++i)
        inventory[i] = nullptr;
}

Character::Character(const Character &other) : name(other.name)
{
    for (int i = 0; i < 4; ++i)
    {
        if (other.inventory[i] != nullptr)
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = nullptr;
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; ++i)
        delete inventory[i];
}

std::string const &Character::getName() const
{
    return name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; ++i)
    {
        if (inventory[i] == nullptr)
        {
            inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
        return;

    inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx >= 4 || inventory[idx] == nullptr)
        return;

    inventory[idx]->use(target);
}
