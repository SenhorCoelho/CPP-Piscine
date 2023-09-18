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
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		
		static Fixed &min(Fixed &nbr1, Fixed &nbr2);
		static Fixed &max(Fixed &nbr1, Fixed &nbr2);
		static const Fixed &min(Fixed const &nbr1, Fixed const &nbr2);
		static const Fixed &max(Fixed const &nbr1, Fixed const &nbr2);

		
		Fixed &operator=(Fixed const &rhs);

		bool operator>(Fixed const &rhs) const;
		bool operator<(Fixed const &rhs) const;
		bool operator>=(Fixed const &rhs) const;
		bool operator<=(Fixed const &rhs) const;
		bool operator==(Fixed const &rhs) const;
		bool operator!=(Fixed const &rhs) const;

		Fixed operator+(Fixed const &rhs) const;
		Fixed operator-(Fixed const &rhs) const;
		Fixed operator*(Fixed const &rhs) const;
		Fixed operator/(Fixed const &rhs) const;
		
		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);




		


	private:

		int	_FPVal;
		static const int _FracBits = 8;

};

std::ostream &operator<<(std::ostream &o, Fixed const &src);

#endif