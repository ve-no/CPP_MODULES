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

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "myAwsome.h"

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

bool  setFname(std::string firstName) {
   if (firstName.empty() || isAllAlpha(firstName)) {
      return (false);
   }
   return (true);
}

class Contact {
   std::string FirstName, LastName, NickName, DarkestSecret, PhoneNumber;
   public:
      Contact(){};
      Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret) {
         FirstName = firstName;
         LastName = lastName;
         NickName = nickName;
         DarkestSecret = darkestSecret;
         PhoneNumber = phoneNumber;
      }
      std::string ft_subs(std::string& str);
      void        displayFullInfo();
      void        displayShortInfo(int index);
      std::string getFname (void);
      bool        setFname(void);
      bool        setLname(void);
      bool        setNeckName(void);
      bool        setPnumber(void);
      bool        setDarkestSecret(void);

};

   std::string Contact::getFname (void) {
      return this->FirstName;
   }
   
   void  Contact::displayFullInfo() {
       std::cout << "First Name: " + FirstName << std::endl;
       std::cout << "Last Name: " + LastName << std::endl;
       std::cout << "Nickname: " << NickName << std::endl;
       std::cout << "Phone Number: " << PhoneNumber << std::endl;
       std::cout << "Darkest Secret: " << DarkestSecret << std::endl;
   }
   std::string Contact::ft_subs(std::string& str) {
     return (str.length() <= 10) ? str : (str.substr(0, 9) + ".");
   }

   void  Contact::displayShortInfo(int index) {
      std::cout << "|" << std::setw(10)  << index   << "|" << std::setw(10)  << ft_subs(FirstName) << "|" << std::setw(10) << ft_subs(LastName)  << "|" << std::setw(10) << ft_subs(NickName) << "|" << std::endl;
   }

   bool    Contact::setFname(void) {
      std::string fName;
      std::cout << "Enter the first name" << std::endl;
      std::getline(std::cin, fName);
      if (fName.empty() || !isAllAlpha(fName)) {
         std::cout << "Field cannot be blank or not alpha !!" << std::endl;
         return (false);
      }
      else
      {
         this->FirstName = fName;
         return (true);
      }
   }

   bool    Contact::setLname(void) {
      std::string lName;
      std::cout << "Enter the last name" << std::endl;
      std::getline(std::cin, lName);
      if (lName.empty() || !isAllAlpha(lName)) {
         std::cout << "Field cannot be blank or not alpha !!" << std::endl;
         return (false);
      }
      else
      {
         this->LastName = lName;
         return (true);
      }
   }

   bool    Contact::setNeckName(void) {
      std::string neckName;
      std::cout << "Enter the neck name" << std::endl;
      std::getline(std::cin, neckName);
      if (neckName.empty() || !isAllAlpha(neckName)) {
         std::cout << "Field cannot be blank or not alpha !!" << std::endl;
         return (false);
      }
      else
      {
         this->NickName = neckName;
         return (true);
      }
   }

   bool    Contact::setPnumber(void) {
      std::string pNumber;
      std::cout << "Enter the phone number" << std::endl;
      std::getline(std::cin, pNumber);
      if (pNumber.empty() || !isAllDigits(pNumber)) {
         std::cout << "Field cannot be blank or not a number !!" << std::endl;
         return (false);
      }
      else
      {
         this->PhoneNumber = pNumber;
         return (true);
      }
   }
   bool    Contact::setDarkestSecret(void) {
      std::string dSecret;
      std::cout << "Enter the phone number" << std::endl;
      std::getline(std::cin, dSecret);
      if (dSecret.empty() || !isAllDigits(dSecret)) {
         std::cout << "Field cannot be blank or not a number !!" << std::endl;
         return (false);
      }
      else
      {
         this->DarkestSecret = dSecret;
         return (true);
      }
   }

 class PhoneBook {
   public:
      Contact  contacts[8];
      int current;
      PhoneBook(){};
      int ADD(Contact contact);
      void Display();
      void displayContacts();
      void DisplayWithIndex(int index);
      int ValidIndex(std::string index);
 };

   int PhoneBook::ADD(Contact contact) {
      current = 0;
   if (current < 8)
      contacts[current++] = contact;
   else
      contacts[0] = contact;
   return (0);
 };

   void PhoneBook::DisplayWithIndex(int index) {
      contacts[index - 1].displayFullInfo();
   }
   void PhoneBook::Display() {
      std::cout << "|  Index   |First Name|Last Name | Nickname |" << std::endl;
      std::cout << "|----------|----------|----------|----------|" << std::endl;
      for (int i = 0; i < current; i++) {
         contacts[i].displayShortInfo(i + 1);
      }
      std::cout << std::endl;
}
   int PhoneBook::ValidIndex(std::string index) {
      int j;
      for (size_t i = 0; i < index.length(); i++) {
        if (!std::isdigit((char)index[i]))
            return 0;
      }
      j = atoi(index.c_str());
      return (j > 0 && j <= current) ? j : 0;
   }

 int main()
 {
   std::string cmd;
   PhoneBook phonebook;
   while (1)
   {
      std::cout << "ENTER ADD or SEARCH or EXIT\n";
      std::getline(std::cin, cmd);
      if (cmd.empty())
         break ;
      if (cmd == "ADD") {
         std::string firstName, lastName, nickName, phoneNumber, darkestSecret;
         std::cout << "Enter the first name\n";
         std::getline(std::cin, firstName);
         std::cout << "Enter the last name\n";
         std::getline(std::cin, lastName);
         std::cout << "Enter the nick name\n";
         std::getline(std::cin, nickName);
         std::cout << "Enter phone number\n";
         std::getline(std::cin, phoneNumber);
         std::cout << "Enter the Darkest Secret\n";
         std::getline(std::cin, darkestSecret);
         Contact newContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
         phonebook.ADD(newContact);
         std::cin.ignore();
         std::cin.clear();
      }
      else if (cmd == "SEARCH") {
         phonebook.Display();
         std::string index;
         std::cout << "Enter the index of the contact to display: ";
         std::cin >> index;
         int i = phonebook.ValidIndex(index);
         if (!i)
            std::cout << "please enter a valid index\n";
         else
            phonebook.DisplayWithIndex(i);
      }
      else if (cmd == "EXIT")
         break ;
      cmd = "d";
   }
 }
