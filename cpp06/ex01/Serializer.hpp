#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

# include <iostream>
# include "Data.hpp"
# include <stdint.h>

class Serializer
{
public:
						Serializer();
						Serializer(Serializer const &copy);
	Serializer			&operator=(Serializer const &copy);
	static uintptr_t	serialize(Data *ptr);
	static Data*		deserialize(uintptr_t raw);
						~Serializer();
};

#endif // SERIALIZER_HPP
