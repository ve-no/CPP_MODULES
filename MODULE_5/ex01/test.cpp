#include <iostream>
#include <exception>
#include <string>

class MyException : public std::exception {
public:
	MyException() : msg("jhjdsnjsdnlsjdnlk") {}
    MyException(const std::string& message) : msg(message) {}

    // Override the what() function to provide the error message
    const char* what() const noexcept override {
        return msg.c_str();
    }

private:
    std::string msg;
};

int main() {
    try {
        throw MyException();
    } catch (const MyException& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
