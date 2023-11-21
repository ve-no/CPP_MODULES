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
    // double convert(std::string from, std::string to, double amount);
    void readData(std::string filename);
    void fillMap(std::string line);
    void parseFile(std::string filename);
    std::map<std::string, double> getRates() const;
};