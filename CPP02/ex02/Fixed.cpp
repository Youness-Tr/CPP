#include "Fixed.hpp"

Fixed::Fixed(){
    // std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::Fixed(int value){
    // std::cout << "int constructor called" << std::endl;
    this->value = value << fractionalBits;
}

Fixed::Fixed(float value){
    // std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& other){
    // std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other){
    // std::cout << "copy assignment operator called" << std::endl;
    this->value = other.getRawBits();
    return *this;
}

float operator<<(std::string& str, const Fixed& other){
    // std::cout << "Shift left operator called" << std::endl;
    return other.getRawBits();
}

Fixed::~Fixed(){
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    // std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw){
    // std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}
float Fixed::toFloat(void) const {
    return static_cast<float>(value) / (1 << fractionalBits);
}

int Fixed::toInt(void) const{
    return value >> fractionalBits;
}
