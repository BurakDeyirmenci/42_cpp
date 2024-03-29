#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base()
{
}

Base::~Base()
{
}

Base  *generate(void)
{
	int result = std::rand() % 3;
	switch (result) {
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return new Base;
}

void  identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "identity of base using pointer is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "identity of base using pointer is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "identity of base using pointer is C" << std::endl;
	else	
		std::cout << "identity of base using pointer is Base" << std::endl;
}

void  identify(Base &p)
{
	try 
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "identity of base using reference is A" << std::endl;
		(void) a;
	}
	catch (const std::bad_cast &)
	{
		try 
		{
			B &b = dynamic_cast<B&>(p);
			std::cout << "identity of base using reference is B" << std::endl;
			(void) b;
		}
		catch (const std::bad_cast &)
		{
			try 
			{
				C &c = dynamic_cast<C&>(p);
				std::cout << "identity of base using reference is C" << std::endl;
				(void) c;
			}
			catch (const std::bad_cast &) 
			{
				std::cout << "identity of base without using pointer is Base" << std::endl;
			}
		}
	}
}
