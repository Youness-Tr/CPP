#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

class Fixed
{
    private:
        int value;
        static const int fractionalBits = 8;
    public :
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        Fixed operator*(const Fixed& other);

    Fixed& operator++();       // Prefix increment

    Fixed operator++(int);     // Postfix increment

    Fixed& operator--();       // Prefix decrement

    Fixed operator--(int);     // Postfix decrement
};

#endif