#include "Base.hpp"
#include <unistd.h>
#include <ctime>
#include <stdlib.h>

int main (void)
{
	Base	*base;

	std::srand(std::time(0));
    base = generate();
    std::cout << "new object generated" << std::endl;
    identify(base);
    identify(*base);
    delete base;

    std::cout << std::endl;
    
    base = generate();
    std::cout << "new object generated" << std::endl;
    identify(base);
    identify(*base);
    delete base;
    std::cout << std::endl;
	return 0;
}
