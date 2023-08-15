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

bool Fixed::operator==(const Fixed& other) {
    return (value == other.value);
}

bool Fixed::operator!=(const Fixed& other) {
    return (value != other.value);
}

bool Fixed::operator>(const Fixed& other)const{
    return (value > other.value);
}

bool Fixed::operator<(const Fixed& other)const{
    return (value < other.value);
}

bool Fixed::operator>=(const Fixed& other) {
    return (value >= other.value);
}

bool Fixed::operator<=(const Fixed& other) {
    return (value <= other.value);
}

Fixed Fixed::operator+(const Fixed& other) {
    return (Fixed(toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) {
    return (Fixed(toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) {
    return (Fixed(toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) {
    return (Fixed(toFloat() / other.toFloat()));
}

Fixed& Fixed::operator++() {
    value++;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed& Fixed::operator--() {
    value--;
    return (*this);
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    operator--();
    return (tmp);
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b ? a : b);
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
