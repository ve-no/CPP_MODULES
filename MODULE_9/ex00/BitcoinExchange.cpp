
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
std::string BitcoinExchange::decrDate(std::string date) {
    std::string year, month, day;
    std::stringstream s(date);

    std::getline(s, year, '-');
    std::getline(s, month, '-');
    std::getline(s, day);
    int y = atof(year.c_str());
    int m = atof(month.c_str());
    int d = atof(day.c_str());
    if (d > 1)
        d--;
    else if (m > 1) {
            m--;
            d = 31;
    }
    else if (y > 2008) {
            y--;
            m = 12;
            d = 31;
    }
    year = to_string(y);
    month = to_string(m);
    day = to_string(d);
    return year + "-" + month + "-" + day;
}

void BitcoinExchange::printData(float val, std::string date) {
    if (_rates.find(date) != _rates.end()) {
        float res = _rates[date] * val;
        std::cout << date << " => " <<  val << " = " << res << std::endl;
        return ;
    }
    else {
        date = decrDate(date);
        printData(val, date);
    }
}

void BitcoinExchange::checkDates(std::string line) {
    std::stringstream s(line);
    std::string date, del, val;

    s >> date >> del >> val;
    if (del != "|" || val.empty()) {
        std::cerr << "Error: bad input => " << date << std::endl;
        return ;
    }
    std::string year, month, day;
    std::stringstream ss(date);
    std::getline(ss, year, '-');
    std::getline(ss, month, '-');
    std::getline(ss, day);
    if (year.length() != 4 || month.length() != 2 || day.length() != 2 || date.length() != 10)
        throw std::runtime_error("invalid file format2");
    if (atof(year.c_str()) < 2009 || atof(year.c_str()) > 2022)
        std::cerr << "";
    if (atof(month.c_str()) < 1 || atof(month.c_str()) > 12)
        throw std::runtime_error("invalid file format4");
    if (atof(day.c_str()) < 1 || atof(day.c_str()) > 31)
        throw std::runtime_error("invalid file format5");
    if (atof(val.c_str()) < 0) {
        std::cerr << "Error: not a positive number." << std::endl;
        return ;
    }
    if (atof(val.c_str()) > 1000 || val.length() > 4) {
        std::cerr << "Error: too large a number." << std::endl;
        return ;
    }

    printData(atof(val.c_str()), date);
}

void BitcoinExchange::parseFile(std::string filename) {
    std::ifstream file(filename.c_str());
    std::string line;

    if (!file.is_open())
        throw std::runtime_error("file not found");
    std::getline(file, line);
    std::cout << line << std::endl;
    if (line != "date | value")
        throw std::runtime_error("invalid file format7");
    while (std::getline(file, line)) {
        checkDates(line);
    }
}