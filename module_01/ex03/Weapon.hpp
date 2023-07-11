#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string type;

    public:
        std::string const &getType();
        void    setType(const std::string& newType);
        Weapon(/* args */);
        ~Weapon();
};

#endif