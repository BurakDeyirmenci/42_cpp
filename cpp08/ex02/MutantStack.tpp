#include "MutantStack.hpp"


template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	std::cout << "MutantStack Default Constructor called" << std::endl;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &obj)
{
	std::cout << "MutantStack Copy assignment operator called" << std::endl;
	if (this == &obj)
		return (*this);
	std::stack<T>::operator=(obj);
	return (*this);
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &obj) : std::stack<T>(obj)
{
	std::cout << "MutantStack Copy Constructor called" << std::endl;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "MutantStack Destructor called" << std::endl;
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const
{
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend() const
{
	return this->c.end();
}

template<typename T>
typename MutantStack<T>::reverse_iterator  MutantStack<T>::rbegin()
{
	return this->c.rbegin();
}

template<typename T>
typename MutantStack<T>::reverse_iterator  MutantStack<T>::rend()
{
	return this->c.rend();
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator  MutantStack<T>::crbegin() const
{
	return this->c.rbegin();
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator  MutantStack<T>::crend() const
{
	return this->c.rend();
}