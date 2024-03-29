#include "PmergeMe.hpp"

bool    checkArgs( int ac, char *av[])
{
    for (int i = 1; i < ac; i++)
    {
        if((!isdigit(av[i][0]) && av[i][0] != '+') || std::atoi(av[i])<0)
            return false;
    }
    return true;
}
void    checkInput(char *av1, char *av2)
{
    if (std::atoi(av1) < 0 || std::atoi(av2) < 0)
    {
        std::cerr << "Invalid Input: Argument must be positive intager\n";
        exit(0);
    }
}