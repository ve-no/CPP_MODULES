#include "BitcoinExchange.hpp"

int main () {
    try {
    BitcoinExchange b("file.csv", "data.csv");
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