#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    float value = obj.toFloat();
    os << value;
    return os;
}

bool operator>(const Fixed& a, const Fixed& b){
    return a.getRawBits() > b.getRawBits();
}

bool operator<(const Fixed& a, const Fixed &b){
    return a.getRawBits() > b.getRawBits();
}

bool operator>=(const Fixed& a, const Fixed& b){
    return a.getRawBits() >= b.getRawBits();
}

bool operator<=(const Fixed& a, const Fixed& b){
    return a.getRawBits() <= b.getRawBits();
}

bool operator==(const Fixed& a, const Fixed& b){
    return a.getRawBits() == b.getRawBits();
}

bool operator!=(const Fixed& a, const Fixed& b){
    return a.getRawBits() != b.getRawBits();
}

int operator+(Fixed& a, Fixed& b){
    return a.getRawBits() + b.getRawBits();
}

int operator-(Fixed& a, Fixed b){
    return a.getRawBits() - b.getRawBits();
}

Fixed Fixed::operator*(const Fixed& other){
    // Perform multiplication and adjust for fractional bits
    Fixed result;
    result.setRawBits((this->getRawBits() * other.getRawBits()) >> fractionalBits);
    return result;
}

int operator/(Fixed& a, Fixed& b){
    return a.getRawBits() / b.getRawBits();
}

Fixed& Fixed::operator++() {
    this->setRawBits(this->getRawBits() + 1);
    return *this;
}
Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    this->setRawBits(this->getRawBits() + 1);
    return temp;
}

Fixed& Fixed::operator--() {
    this->setRawBits(this->getRawBits() - 1);
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    this->setRawBits(this->getRawBits() - 1);
    return temp;
}

static Fixed& min(Fixed& a, Fixed& b){
    return a < b ? a : b;
}

static Fixed& max(Fixed& a, Fixed& b){
    return a > b ? a : b;
}

static const Fixed& min(const Fixed& a, const Fixed& b){
    return a < b ? a : b;
}

static const Fixed& max(const Fixed& a, const Fixed& b){
    return a > b ? a : b;
}

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << max( a, b ) << std::endl;
return 0;
}
