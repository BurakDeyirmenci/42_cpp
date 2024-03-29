#include "span.hpp"

Span::Span(void) : _size(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Span::Span(size_t numbers) : _size(numbers)
{
	std::cout << "Constructor with numbers parametter called" << std::endl;
}

Span::~Span()
{
	std::cout << "Destructor called" << std::endl;
}

void	Span::addNumber(int number)
{
	if (_vector.size() == _size)
		throw Span::VectorAlreadyFilled();
	_vector.push_back(number);
}

static	int	randomInt(size_t size)
{
	int i;
	i = (rand() % size) + 1;
	return (i);
}

void	Span::fill(void)
{
	size_t	start;
    srand((unsigned)time(0));
	start = _vector.size();
	while (start < _size)
	{
		usleep(100);
		_vector.push_back(randomInt(10000));
		start++;
	}
}

int		Span::shortestSpan(void) const
{
    int rtn;
    int min;

	if (_vector.empty())
		throw Span::VectorIsEmpty();
	else if (_vector.size() == 1)
		throw Span::VectorLengthIsOne();
	std::vector<int>copy = _vector;
    rtn = copy[_size-1];

    for(size_t i =1; i < _vector.size(); i++)
    {
        min = std::abs(copy[i] - copy[i-1]);
        rtn = std::min(rtn,min);
    }
    
	return (rtn);
}

int		Span::longestSpan(void) const
{
	if (_vector.empty())
		throw Span::VectorIsEmpty();
	else if (_vector.size() == 1)
		throw Span::VectorLengthIsOne();
	std::vector<int>copy = _vector;
	std::sort(copy.begin(), copy.end());
	return (std::abs(copy[_size-1] - copy[0]));
}