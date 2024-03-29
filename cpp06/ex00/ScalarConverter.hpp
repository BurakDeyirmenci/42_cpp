#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <exception>
# include <errno.h>
# include <limits>
# include <limits.h>
# include <float.h>
# include <math.h>

class ScalarConverter
{
private:
	static char		c;
	static long int	i;
	static float	f;
	static double	d;
	static char		type;

	static int		c_err;
	static int		i_err;
	static int		f_err;
	static int		d_err;
public:
					ScalarConverter();
					ScalarConverter(const ScalarConverter &);
	ScalarConverter	&operator=(const ScalarConverter &);
	static void		convert(const std::string &);
	static char		getType(std::string const &literal);
	static void		printResults(void);
	static void		checkErrors(void);
					~ScalarConverter();
};
char is_number(std::string const &str);

#endif // SCALARCONVERTER_HPP