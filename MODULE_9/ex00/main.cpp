#include "BitcoinExchange.hpp"

int main (int ac, char **av) {
    if (ac != 2) {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }
    try {
    BitcoinExchange b(av[1], "data.csv");
    // std::map<std::string, double> m = b.getRates();
    // std::map<std::string, double>::iterator it = m.begin();
    // while (it != m.end()) {
    //     std::cout << it->first << " " << it->second << std::endl;
    //     it++;
    // }
    // b.readData("data.csv");
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}