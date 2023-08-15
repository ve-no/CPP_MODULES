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

    ~Fixed();

    float toFloat()const;

    int toInt()const;

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);




