#include "Data.hpp"

Data::Data():content(0)
{
}

Data::Data(int content):content(content)
{
}

Data::Data(Data const &copy):content(copy.content)
{
}

Data	&Data::operator=(const Data &copy)
{
    this->content = copy.content;		
	return *this;
}

int	Data::getContent(void) const
{
	return content;
}

Data::~Data()
{
}
