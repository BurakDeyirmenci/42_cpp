#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <unistd.h>

#ifndef SPAN_H
	#define SPAN_H
	class Span
	{
		private:
			size_t	_size;
			std::vector<int> _vector;
		public:
			Span(void);
			Span(size_t	numbers);
			void	addNumber(int number);
			void	fill(void);
			int		shortestSpan(void) const;
			int		longestSpan(void) const;
			~Span();

			// Exceptions
			class VectorAlreadyFilled : public std::exception
			{
				public:
					char const * what() const throw()
					{
						return "Vector is already filled!";
					}
			};

			class VectorIsEmpty : public std::exception
			{
				public:
					char const * what() const throw()
					{
						return "Vector is empty!";
					}
			};

			class VectorLengthIsOne : public std::exception
			{
				public:
					char const * what() const throw()
					{
						return "Vector length is one!";
					}
			};
	};

#endif