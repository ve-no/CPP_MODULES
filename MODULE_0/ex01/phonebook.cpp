   
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
      return this->contacts[current % 8].newContact();
 };

   void PhoneBook::DisplayWithIndex(int index) {
      contacts[index].displayFullInfo();
   }
   void PhoneBook::Display(int current) {
      std::cout << "|  Index   |First Name|Last Name | Nickname |" << std::endl;
      std::cout << "|----------|----------|----------|----------|" << std::endl;
      int j = (current > 7) ? 7 : current;
      for (int i = 0; i < j; i++) {
         contacts[i].displayShortInfo(i);
      }
      std::cout << std::endl;
}
   int PhoneBook::ValidIndex(std::string index, int current) {
      int j;
        if (!std::isdigit((char)index[0]))
            return 0;
      j = atoi(index.c_str());
      current = (current > 7) ? 7 : current;
      return (j >= 0 && j < current) ? j - 1 : 0;
   }

