#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <cstdlib>

class BitcoinExchange
{
private:
    std::map<std::string, double> _rates;
    std::string _filename;
public:
    BitcoinExchange();
    BitcoinExchange(std::string filename, std::string data);
    BitcoinExchange(const BitcoinExchange &copy);
    BitcoinExchange &operator=(const BitcoinExchange &copy);
    ~BitcoinExchange();
    void readData(std::string filename);
    void fillMap(std::string line);
    void parseFile(std::string filename);
    void checkDates(std::string line);
    void printData(float val, std::string date);
    std::string decrDate(std::string date);

    std::map<std::string, double> getRates() const;
};

template <typename T>
std::string to_string(const T& value) {
  std::stringstream ss;
  ss << value;
  return ss.str();
}