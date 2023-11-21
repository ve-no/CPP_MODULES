#include "BitcoinExchange.hpp"

int main () {

    BitcoinExchange exchange;
    exchange.readData("data.csv");
    std::map<std::string, double> rates = exchange.getRates();
    std::map<std::string, double>::iterator it = rates.begin();
    while (it != rates.end()) {
        std::cout << it->first << " " << std::endl;
        it++;
    }
}