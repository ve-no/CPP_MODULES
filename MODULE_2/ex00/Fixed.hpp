#include <iostream>

class Fixed {
private:
    int value;
    static const int fractionalBits = 8;

public:
    Fixed();

    Fixed(Fixed& other);

    Fixed& operator=(Fixed& other);

    ~Fixed();

    int getRawBits() const;

    void setRawBits(int const raw);
};


