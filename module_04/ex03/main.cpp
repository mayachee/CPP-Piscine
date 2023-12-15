#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{
    Character character("Yassine");
    Ice ice;
    Cure cure;

    character.equip(&ice);
    // character.use(0, character); // Output: * shoots an ice bolt at Player *

    // character.equip(&cure);
    // character.use(1, character); // Output: * heals Player's wounds *

    // MateriaSource source;
    // source.learnMateria(&ice);
    // source.learnMateria(&cure);

    // AMateria *iceMateria = source.createMateria("ice");
    // if (iceMateria != nullptr)
    // {
    //     iceMateria->use(character); // Output: * shoots an ice bolt at Player *
    //     delete iceMateria;
    // }

    // AMateria *unknownMateria = source.createMateria("unknown");
    // if (unknownMateria == nullptr)
    //     std::cout << "Unknown Materia\n";

    return 0;
}
