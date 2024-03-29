#include "iter.hpp"

template <typename T>
void print(T &val)
{
	std::cout << val << std::endl;
}

template <typename T>
void upchr(T &val)
{
	val++;
}

int main( void )
{
	int arr[4] = {7, 77, 10, 777};
	iter(arr, 4, &print);
    
    std::cout << "--------Float--------" << std::endl;
	float floatR[5] = { 0.0f, 1.1f, 2.2f, 3.3f, 4.4f };
	iter(floatR, 5, &print);

    std::cout << "--------double--------" << std::endl;
	double doubleR[5] = { 0.00, 1.11, 2.22, 3.33, 4.44 };
	iter(doubleR, 5, &print);

    std::cout << "--------bool--------" << std::endl;
	bool boolR[2] = { false, true };
	iter(boolR, 2, &print);

    std::cout << "--------string--------" << std::endl;
	char stringR[8] = "Penguen";
	iter(stringR, 8, &print);
	iter(stringR, 8, &upchr);
	iter(stringR, 4, &print);
	return 0;
}