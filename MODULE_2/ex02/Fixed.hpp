#include <iostream>
#include <cmath>

class Fixed {
private:
    int value;
    static const int fractionalBits = 8;

public:
    Fixed();

    Fixed(const int integerValue);

    Fixed(const float floatValue);

    Fixed(const Fixed& other);

    Fixed& operator=(const Fixed& other);

    bool    operator==(const Fixed& other)const;

    bool    operator!=(const Fixed& other)const;

    bool    operator>(const Fixed& other)const;

    bool    operator<(const Fixed& other)const;

    bool    operator>=(const Fixed& other)const;

    bool    operator<=(const Fixed& other)const;

    Fixed   operator+(const Fixed& other);

    Fixed   operator-(const Fixed& other);

    Fixed   operator*(const Fixed& other);

    Fixed   operator/(const Fixed& other);

    Fixed& operator++();

    Fixed operator++(int);

    Fixed& operator--();

    Fixed operator--(int);

    Fixed& min(Fixed& a, Fixed& b);

    Fixed& max(Fixed& a, Fixed& b);

    const Fixed& max(const Fixed& a, const Fixed& b);

    const Fixed& min(const Fixed& a, const Fixed& b);

    ~Fixed();

    float toFloat()const;

    int toInt()const;

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);




