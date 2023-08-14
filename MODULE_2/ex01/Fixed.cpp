#include "Fixed.hpp"
Fixed::Fixed() {
    value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    value = other.value;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "copy assignment operator called" << std::endl;
    if (this != &other)
        value = other.value;
    return (*this);
}

Fixed::Fixed(const int intValue) {
    value = intValue * pow(2, fractionalBits);
}

Fixed::Fixed(const float floatValue) {
    value = roundf(floatValue * pow(2, fractionalBits));
}

int Fixed::toInt () const{
    return (value / pow(2, fractionalBits));
}

float Fixed::toFloat() const{
    return (value / pow(2, fractionalBits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
