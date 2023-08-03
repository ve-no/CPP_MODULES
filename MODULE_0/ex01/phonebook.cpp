   
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
      int j = (current > 8) ? 8 : current;
      for (int i = 0; i < j; i++) {
         contacts[i].displayShortInfo(i + 1);
      }
      std::cout << std::endl;
}
   int PhoneBook::ValidIndex(std::string index, int current) {
      int j;
        if (!std::isdigit((char)index[0]))
            return 0;
      j = atoi(index.c_str());
      current = (current > 8) ? 8 : current;
      return (j > 0 && j <= current) ? j : 0;
   }

