 /* * * * * * * * * * * * * * * * * * * * * **
 **    _    __ ______       _   __ ____     **
 **   | |  / // ____/      / | / // __ \    **
 **   | | / // __/ ______ /  |/ // / / /    **
 **   | |/ // /___/_____// /|  // /_/ /     **
 **   |___//_____/      /_/ |_/ \____/      **
 ** * * * * * * * * * * * * * * * * * * * * **
 ** Created Date: July 29th 2023, 17:07     **
 ** Author: Allal El Bakouri (ael-bako)     **
 ** Github: ve-no                           **
 ** * * * * * * * * * * * * * * * * * * * * */

 #include "contact.hpp"
 #include "phonebook.hpp"

 bool isAllAlpha(const std::string &str)
 {
     for (size_t i = 0; i < str.length(); i++)
         if (!std::isalpha(str[i]))
             return false;
     return true;
}

bool isAllDigits(const std::string& str) {
    for (size_t i = 0; i < str.length(); i++)
        if (!std::isdigit(str[i])) 
            return false;
    return true;
}

 int main() {
   std::string cmd;
   PhoneBook phonebook;
   int current = 0;
   while (1)
   {
      getNextLine("ENTER ATGJHKJLK:LDD or SEARCH or EXIT", cmd);
      if (cmd.empty()) {
         clearerr(stdin);
         std::cin.clear();
      }
      else if (cmd == "ADD") {
         if (phonebook.ADD(current))
            current++;
      }
      else if (cmd == "SEARCH") {
         if (current)
            phonebook.Display(current);
         std::string index;
         if (current == 0)
            std::cout << "there is no contact to display" << std::endl;
            
         else {
            int j = (current > 7) ? 7 : current;
            while (!phonebook.ValidIndex(index, current)) {
               std::cout << "please enter an index between 0 and ";
               getNextLine(j - 1, index);
            }
            phonebook.DisplayWithIndex(std::atoi(index.c_str()));
         }
      }
      else if (cmd == "EXIT")
         break ;
      else
         std::cout << cmd << ":\tinvalid choise" << std::endl;
   }
 }
