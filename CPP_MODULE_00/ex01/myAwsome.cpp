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
       void displayFullInfo() {
        std::cout << "First Name: " + FirstName << std::endl;
        std::cout << "Last Name: " + LastName << std::endl;
        std::cout << "Nickname: " << NickName << std::endl;
        std::cout << "Phone Number: " << PhoneNumber << std::endl;
        std::cout << "Darkest Secret: " << DarkestSecret << std::endl;
    }

      std::string subs(const std::string& str) {
        return (str.length() <= 12) ? str : (str.substr(0, 11) + ".");
    }
   

    void displayShortInfo(int index) {
      std::cout << "|" << std::setw(13)  << index   << "|" << std::setw(13)  << subs(FirstName) << "|" << std::setw(13) << subs(LastName)  << "|" << std::setw(13) << subs(NickName) << "|" << std::endl;
    }
};


 class PhoneBook {
   public:
      Contact  contacts[8];
      int current;
      PhoneBook(){};
      int ADD(Contact contact);
      void Display();
      void displayContacts();
      void DisplayWithIndex(int index);
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
      contacts[index].displayFullInfo();
   }
   void PhoneBook::Display() {
      std::cout << "|    Index    |  First Name |  Last Name  |  Nickname   |" << std::endl;
      std::cout << "|-------------|-------------|-------------|-------------|" << std::endl;
      for (int i = 0; i < current; i++) {
         contacts[i].displayShortInfo(i);
      }
      std::cout << std::endl;
}

 int main()
 {
   std::string cmd;
   PhoneBook phonebook;
   while (1)
   {
      std::cout << "ENTER ADD or SEARCH or EXIT\n";
      std::cin >> cmd;
      if (cmd == "ADD") {
         std::string firstName, lastName, nickName, phoneNumber, darkestSecret;
         std::cout << "Enter the first name\n";
         std::cin >> firstName;
         std::cout << "Enter the last name\n";
         std::cin >> lastName;
         std::cout << "Enter the nick name\n";
         std::cin >> nickName;
         std::cout << "Enter phone number\n";
         std::cin >> phoneNumber;
         std::cout << "Enter the Darkest Secret\n";
         std::cin >> darkestSecret;
         Contact newContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
         phonebook.ADD(newContact);
      }
      else if (cmd == "SEARCH") {
         phonebook.Display();
         int index;
         std::cout << "Enter the index of the contact to display: ";
         std::cin >> index;
         if (phonebook.ValidIndex(index))
           phonebook.DisplayWithIndex(index);
         else
            std::cout "please enter a valid index\n";

      }
   }

 }
