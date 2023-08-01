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

 int main()
 {
   std::string cmd;
   PhoneBook phonebook;
   int current = 0;
   while (1)
   {
      std::cout << "ENTER ADD or SEARCH or EXIT\n";
      std::getline(std::cin, cmd);
      if (cmd.empty()) {
         clearerr(stdin);
         std::cin.clear();
      }
      else if (cmd == "ADD") {
         if (phonebook.ADD(current))
            current++;
         std::cin.ignore();
         std::cin.clear();
      }
      else if (cmd == "SEARCH") {
         if (current)
            phonebook.Display(current);
         std::string index;
         std::cout << "Enter the index of the contact to display: ";
         std::cin >> index;
         std::cin.ignore();
         std::cin.clear();
         int i = phonebook.ValidIndex(index, current);
         if (!i)
            std::cout << "please enter a valid index\n";
         else
            phonebook.DisplayWithIndex(i);
      }
      else if (cmd == "EXIT")
         break ;
      else
      {
         clearerr(stdin);
         std::cin.clear();
         std::cout << ":\tinvalid choise" << std::endl;
      }
   }
 }
