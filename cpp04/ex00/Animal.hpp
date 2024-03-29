#ifndef ANIMAL_HPP_
# define ANIMAL_HPP_

#include <string>

class Animal {
	public:
		Animal();
		Animal(const Animal& other);
		virtual ~Animal();

		Animal& operator=(const Animal& other);

		virtual void makeSound() const;

		const std::string& getType() const;
	protected:
		std::string type;
};

#endif
