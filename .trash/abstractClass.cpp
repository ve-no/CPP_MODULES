#include <iostream>

class AbstractShape {
public:
    virtual double area() const = 0; // Pure virtual function
    virtual void display() const = 0; // Another pure virtual function
};

class Circle : public AbstractShape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }

    void display() const override {
        std::cout << "Circle with radius " << radius << std::endl;
    }
};

class Square : public AbstractShape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double area() const override {
        return side * side;
    }

    void display() const override {
        std::cout << "Square with side " << side << std::endl;
    }
};

int main() {

    Circle circle(5.0);
    Square square(4.0);

    AbstractShape* shapePtr1 = &circle;
    AbstractShape* shapePtr2 = &square;

	AbstractShape shapePtr3 ;

    shapePtr1->display();
    std::cout << "Area: " << shapePtr1->area() << std::endl;

    shapePtr2->display();
    std::cout << "Area: " << shapePtr2->area() << std::endl;

    return 0;
}
