#ifndef BRAIN_HPP_
# define BRAIN_HPP_

#include <string>

class Brain {
	public:
		Brain();
		Brain(const Brain& other);
		~Brain();

		Brain& operator=(const Brain& other);

		static const int kNIdeas = 100;

		std::string ideas[Brain::kNIdeas];
};

#endif
