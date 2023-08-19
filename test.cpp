#include <iostream>

class Animal {
public:
    virtual void make_sound() const {
        std::cout << "Animal makes a sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void make_sound() const {
        std::cout << "Dog barks: Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void make_sound() const{
        std::cout << "Cat meows: Meow!" << std::endl;
    }
};

void animal_sounds(const Animal* animal) {
    animal->make_sound();
}

int main() {
    Dog* dog = new Dog();
    Cat *cat = new Cat();

    animal_sounds(dog);  // Output: Dog barks: Woof!
    animal_sounds(cat);  // Output: Cat meows: Meow!

    return 0;
}
