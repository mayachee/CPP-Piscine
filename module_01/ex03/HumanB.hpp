#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string NAME;
        Weapon*     WEAPON_TYPE;
    public:
        void setweapen(Weapon* WEAPON_TYPE);
        void attack();
        HumanB(std::string NAME);
        ~HumanB();
};

#endif