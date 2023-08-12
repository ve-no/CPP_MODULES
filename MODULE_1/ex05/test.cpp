#include <iostream>
#include <map>
#include <string>

class Harl {
private:
    void debug() {
        std::cout << "DEBUG: Debug message\n";
    }

    void info() {
        std::cout << "INFO: Info message\n";
    }

    void warning() {
        std::cout << "WARNING: Warning message\n";
    }

    void error() {
        std::cout << "ERROR: Error message\n";
    }

public:
    void complain(std::string level) {
        std::map<std::string, void (Harl::*)()> levelMap;
        levelMap["DEBUG"] = &Harl::debug;
        levelMap["INFO"] = &Harl::info;
        levelMap["WARNING"] = &Harl::warning;
        levelMap["ERROR"] = &Harl::error;

        std::map<std::string, void (Harl::*)()>::iterator it = levelMap.find(level);
        if (it != levelMap.end()) {
            (this->*(it->second))();
        } else {
            std::cout << "Invalid level: " << level << std::endl;
        }
    }
};

int main() {
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("UNKNOWN");

    return 0;
}
