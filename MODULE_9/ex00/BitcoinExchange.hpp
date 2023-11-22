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
    /**
     * @brief Reads data from a file.
     * 
     * This function reads data from a file specified by the filename parameter.
     * 
     * @param filename The name of the file to read from.
     */
    void readData(std::string filename);
    /**
     * @brief Parses a file with the given filename.
     * 
     * This function reads and processes the contents of a file with the specified filename.
     * 
     * @param filename The name of the file to be parsed.
     */
    void parseFile(std::string filename);
    /**
     * @brief Checks the dates in the given line.
     * 
     * This function takes a string line as input and checks the dates in it.
     * It performs some operations based on the dates found in the line.
     * 
     * @param line The string line to check.
     */
    void checkDates(std::string line);
    /**
     * @brief Prints the data of a Bitcoin exchange.
     * 
     * @param val The value of the Bitcoin exchange.
     * @param date The date of the Bitcoin exchange.
     * @param prevDate The previous date of the Bitcoin exchange.
     */
    void printData(float val, std::string date, std::string prevDate);
public:
    /**
     * @brief Class representing a Bitcoin exchange.
     * 
     * This class provides functionality for managing Bitcoin transactions and exchanges.
     */
    BitcoinExchange();
    /**
     * @brief Class representing a Bitcoin exchange.
     * 
     * This class is responsible for managing Bitcoin exchange operations.
     * It takes a filename and data as parameters to initialize the exchange.
     */
    BitcoinExchange(std::string filename, std::string data);
    /**
     * @brief The BitcoinExchange class represents a Bitcoin exchange.
     * 
     * This class provides functionality for managing Bitcoin transactions and exchanges.
     * It allows users to buy and sell Bitcoins, view transaction history, and manage their Bitcoin wallet.
     * 
     * The BitcoinExchange class supports copy construction.
     */
    BitcoinExchange(const BitcoinExchange &copy);
    /**
     * @brief The BitcoinExchange class represents a Bitcoin exchange.
     * 
     * This class provides functionality for managing Bitcoin exchanges.
     * It includes methods for buying and selling Bitcoins, as well as
     * retrieving the current Bitcoin price.
     */
    BitcoinExchange &operator=(const BitcoinExchange &copy);
    /**
     * @brief Destructor for the BitcoinExchange class.
     */
    ~BitcoinExchange();

};

template <typename T>
/**
 * @brief Converts the given value to a string representation.
 * 
 * @tparam T The type of the value to convert.
 * @param value The value to convert to a string.
 * @return std::string The string representation of the value.
 */
std::string to_string(const T& value) {
  std::stringstream ss;
  ss << value;
  return ss.str();
}