#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	public:

		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(const int nbr);
		Fixed(const float nbr);
		~Fixed(void);

	 	Fixed &operator=(Fixed const &rhs);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

	private:

		int	_FPVal;
		static const int _FracBits = 8;

};

std::ostream &operator<<(std::ostream &o, Fixed const &src);

#endif

