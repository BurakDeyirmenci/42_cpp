#include "Data.hpp"
#include "Serializer.hpp"

int main (void)
{
	Data		n(42);	
	uintptr_t	ptr;
	Data*		data_ptr;

	std::cout << "data pointer: " << &n << std::endl;
	ptr = Serializer::serialize(&n);
	std::cout << "data content: " << n.getContent() << std::endl;

	std::cout << "data pointer serialized: " << ptr << std::endl;
	data_ptr = Serializer::deserialize(ptr);

	std::cout << "data pointer deserialized: " << data_ptr << std::endl;

	std::cout << "data content deserialized: " << data_ptr->getContent() << std::endl;

	return 0;
}
