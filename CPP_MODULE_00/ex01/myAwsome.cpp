/*
 * Filename: /Users/ael-bako/1337_cursus/CPP_MODULES/CPP_Module_00/ex01/myAwsome.cpp
 * Path: /Users/ael-bako/1337_cursus/CPP_MODULES/CPP_Module_00/ex01
 * Created Date: Thursday, July 21th 2023, 14:20:34 am
 * Author: Allal El Bakouri
 */

#include <iostream>
#include <string>

class Contact {
   std::string FirstName, LastName, NickName, DarkestSecret, PhoneNumber;
   Contact(string firstName, string lastName, string nickName, string phoneNumber, string darkestSecret) {
      FirstName = firstName;
      LastName = lastName;
      NickName = nickName;
      DarkestSecret = darkestSecret;
      PhoneNumber = phoneNumber;
   }
 public:
    int ADD () {

    }
    void SEARCH () {

    }
    void EXIT() {

    }
}

 class PhoneBook {
   Contact  contacts[8];

 }
