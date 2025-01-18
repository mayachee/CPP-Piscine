

#include "PmergeMe.hpp"


int main(int ac, char **av)
{
    if (ac <= 2)
    {
        std::cerr << "Usage: ./pmergeMe " << std::endl;
        return 1;
    }

    PmergeMe pmergeMe(av);
    pmergeMe.run();

    return 0;
}