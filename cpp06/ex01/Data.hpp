#ifndef DATA_HPP
#define DATA_HPP

# include <iostream>

class Data
{
private:
	int		content;
public:
			Data();
			Data(int content);
			Data(Data const &copy);
	Data	&operator=(Data const &copy);
	int		getContent(void) const;
			~Data();
};

#endif // DATA_HPP

