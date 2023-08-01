   
 /* * * * * * * * * * * * * * * * * * * * * **
 **    _    __ ______       _   __ ____     **
 **   | |  / // ____/      / | / // __ \    **
 **   | | / // __/ ______ /  |/ // / / /    **
 **   | |/ // /___/_____// /|  // /_/ /     **
 **   |___//_____/      /_/ |_/ \____/      **
 ** * * * * * * * * * * * * * * * * * * * * **
 ** Created Date: July 30th 2023, 16:19     **
 ** Author: Allal El Bakouri (ael-bako)     **
 ** Github: ve-no                           **
 ** * * * * * * * * * * * * * * * * * * * * */

   #include "contact.hpp"
   #include "phonebook.hpp"
   int  PhoneBook::ADD(int current) {
      if (current < 8)
         return this->contacts[current].newContact();
      else
         return this->contacts[0].newContact();
 };

   void PhoneBook::DisplayWithIndex(int index) {
      contacts[index - 1].displayFullInfo();
   }
   void PhoneBook::Display(int current) {
      std::cout << "|  Index   |First Name|Last Name | Nickname |" << std::endl;
      std::cout << "|----------|----------|----------|----------|" << std::endl;
      for (int i = 0; i < current; i++) {
         contacts[i].displayShortInfo(i + 1);
      }
      std::cout << std::endl;
}
   int PhoneBook::ValidIndex(std::string index, int current) {
      int j;
      for (size_t i = 0; i < index.length(); i++) {
        if (!std::isdigit((char)index[i]))
            return 0;
      }
      j = atoi(index.c_str());
      return (j > 0 && j <= current) ? j : 0;
   }

