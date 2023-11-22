
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string filename, std::string data) {
    this->_filename = filename;
    readData(data);
    parseFile(filename);
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
        std::stringstream s(line);
        std::string rate, date;
        getline(s, date, ',');
        getline(s, rate);
        _rates[date] = atof(rate.c_str());
    }
    file.close();
}

void BitcoinExchange::printData(float val, std::string date, std::string prevDate) {
    if (_rates.find(date) != _rates.end()) {
        float res = _rates[date] * val;
        std::cout << prevDate << " => " <<  val << " = " << res << std::endl;
        return ;
    }
    else {
        std::map<std::string, double>::iterator it = _rates.lower_bound(date);
        it--;
        printData(val, it->first, prevDate);
    }
}

void BitcoinExchange::checkDates(std::string line) {
    std::stringstream s(line);
    std::string date, del, val;

    s >> date >> del >> val;
    std::string year, month, day;
    std::stringstream ss(date);
    std::getline(ss, year, '-');
    std::getline(ss, month, '-');
    std::getline(ss, day);
    if (del != "|" || val.empty() || year.length() != 4 || month.length() != 2
        || day.length() != 2 || date.length() != 10 || date < "2009-01-02") {
        std::cerr << "Error: bad input => " << date << std::endl;
        return ; }
    if (atof(year.c_str()) < 2009 || atof(year.c_str()) > 2022 
        || atof(month.c_str()) < 1 || atof(month.c_str()) > 12 
        || atof(day.c_str()) < 1 || atof(day.c_str()) > 31) {
        std::cerr << "Error: bad input => " << date << std::endl;
        return ; }
    if (atof(val.c_str()) < 0) {
        std::cerr << "Error: not a positive number." << std::endl;
        return ; }
    if (atof(val.c_str()) > 1000 || val.length() > 4) {
        std::cerr << "Error: too large a number." << std::endl;
        return ; }
    printData(atof(val.c_str()), date, date);
}

void BitcoinExchange::parseFile(std::string filename) {
    std::ifstream file(filename.c_str());
    std::string line;

    if (!file.is_open())
        throw std::runtime_error("file not found");
    std::getline(file, line);
    if (line != "date | value")
        throw std::runtime_error("invalid file format");
    while (std::getline(file, line))
        checkDates(line);
}