
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string filename, std::string data) {
    this->_filename = filename;
    readData(data);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) {
    *this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy) {
    if (this != &copy)
        this->_rates = copy._rates;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::readData(std::string filename) {
    std::ifstream file(filename.c_str());
    std::string line;

    if (!file.is_open())
        throw std::runtime_error("file not found");
    std::getline(file, line);
    while (std::getline(file, line)) { 
        fillMap(line);
    }
    file.close();
}

void	BitcoinExchange::fillMap(std::string line)
{
	std::stringstream s(line);
	std::string rate, date;
	
	getline(s, date, ',');
	getline(s, rate);
	_rates[date] = atof(rate.c_str());
}

std::map<std::string, double> BitcoinExchange::getRates() const {
    return this->_rates;
}

void BitcoinExchange::parseFile(std::string filename) {
    std::ifstream file(filename.c_str());
    std::string line;

    if (!file.is_open())
        throw std::runtime_error("file not found");
    std::getline(file, line);
    if (line != "date | value")
        throw std::runtime_error("invalid file format");
    while (std::getline(file, line)) {
}