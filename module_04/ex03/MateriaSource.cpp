#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; ++i)
        materiaList[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i)
        delete materiaList[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; ++i)
    {
        if (materiaList[i] == nullptr)
        {
            materiaList[i] = m->clone();
            break;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; ++i)
    {
        if (materiaList[i] != nullptr && materiaList[i]->getType() == type)
            return materiaList[i]->clone();
    }

    return nullptr;
}