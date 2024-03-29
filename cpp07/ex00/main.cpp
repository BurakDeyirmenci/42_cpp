#include "whatever.hpp"
class A
{
public:
	int x;
	A();
	~A();
};

class B
{
public:
	int x;
	B();
	~B();
};

A::A(){x=1;}
A::~A(){}

B::B(){x=2;}
B::~B(){}

int main( void )
{
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
		
	}
	{
		A *a = new A();
		B *b = new B();
		::swap( a->x, b->x );
		std::cout << "a = " << a->x << ", b = " << b->x << std::endl;
		std::cout << "min( a, b ) = " << ::min( a->x, b->x ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a->x, b->x ) << std::endl;
		
	}
}