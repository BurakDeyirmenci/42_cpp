#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

// Exceptions
class numberNotFound : public std::exception
{
	public:
		char const * what() const throw()
		{
			return "Could't find the number inside!";
		}
};

template <typename T>
int	* easyfind(T &vector, int num)
{
	typename T::iterator it;

	if((it = std::find(vector.begin(), vector.end(), num)) == vector.end())
		throw numberNotFound();
	return (&(*it));
}