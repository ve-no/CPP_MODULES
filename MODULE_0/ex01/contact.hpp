 /* * * * * * * * * * * * * * * * * * * * * **
 **    _    __ ______       _   __ ____     **
 **   | |  / // ____/      / | / // __ \    **
 **   | | / // __/ ______ /  |/ // / / /    **
 **   | |/ // /___/_____// /|  // /_/ /     **
 **   |___//_____/      /_/ |_/ \____/      **
 ** * * * * * * * * * * * * * * * * * * * * **
 ** Created Date: July 30th 2023, 13:19     **
 ** Author: Allal El Bakouri (ael-bako)     **
 ** Github: ve-no                           **
 ** * * * * * * * * * * * * * * * * * * * * */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cstdio>

class Contact {
   private:
      std::string FirstName, LastName, NickName, DarkestSecret, PhoneNumber;
   public:
      std::string       ft_subs(std::string& str);
      void              displayFullInfo();
      void              displayShortInfo(int index);
      std::string       getFname (void);
      std::string       getLname (void);
      std::string       getNeckName (void);
      std::string       getPnumber (void);
      std::string       getDarkestSecret (void);
      bool              setFname(void);
      bool              setLname(void);
      bool              setNeckName(void);
      bool              setPnumber(void);
      bool              setDarkestSecret(void);
      int              newContact(void);
};
bool isAllAlpha(const std::string &str);
bool isAllDigits(const std::string& str);

#endif