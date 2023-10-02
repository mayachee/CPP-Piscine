#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string NAME;
        Weapon& WEAPON_TYPE;
    public:
        void    attack();
        HumanA(std::string NAME, Weapon& WEAPON_TYPE);
        ~HumanA();
};

#endif