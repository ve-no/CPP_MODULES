 /* * * * * * * * * * * * * * * * * * * * * **
 **    _    __ ______       _   __ ____     **
 **   | |  / // ____/      / | / // __ \    **
 **   | | / // __/ ______ /  |/ // / / /    **
 **   | |/ // /___/_____// /|  // /_/ /     **
 **   |___//_____/      /_/ |_/ \____/      **
 ** * * * * * * * * * * * * * * * * * * * * **
 ** Created Date: July 30th 2023, 13:28     **
 ** Author: Allal El Bakouri (ael-bako)     **
 ** Github: ve-no                           **
 ** * * * * * * * * * * * * * * * * * * * * */

#ifndef PhoneBook_HPP
# define PhoneBook_HPP

#include "contact.hpp"

class PhoneBook {
   public:
      Contact  contacts[8];
      PhoneBook(){};
      int  ADD(int current);
      void Display(int current);
      void displayContacts();
      void DisplayWithIndex(int index);
      int ValidIndex(std::string index, int current);
 };

#endif