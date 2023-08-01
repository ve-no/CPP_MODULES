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

// class Contact {
//    private:
//       std::string FirstName, LastName, NickName, DarkestSecret, PhoneNumber;
//    public:
//       std::string ft_subs(std::string& str);
//       void        displayFullInfo();
//       void        displayShortInfo(int index);
//       std::string getFname (void);
//       std::string getLname (void);
//       std::string getNeckName (void);
//       std::string getPnumber (void);
//       std::string getDarkestSecret (void);
//       bool        setFname(void);
//       bool        setLname(void);
//       bool        setNeckName(void);
//       bool        setPnumber(void);
//       bool        setDarkestSecret(void);
//       bool        newContact(void);
// };

   // std::string Contact::getFname (void) {
   //    return this->FirstName;
   // }
   //    std::string Contact::getLname (void) {
   //    return this->LastName;
   // }
   //    std::string Contact::getNeckName (void) {
   //    return this->NickName;
   // }
   //    std::string Contact::getPnumber (void) {
   //    return this->PhoneNumber;
   // }
   //    std::string Contact::getDarkestSecret (void) {
   //    return this->DarkestSecret;
   // }
   
   // void  Contact::displayFullInfo() {
   //    std::string FirstName, LastName, NickName, PhoneNumber, DarkestSecret;

   //    FirstName = this->getFname();
   //    LastName = this->getLname();
   //    NickName = this->getNeckName();
   //    PhoneNumber = this->getPnumber();
   //    DarkestSecret = this->getDarkestSecret();
   //    std::cout << "First Name: " + FirstName << std::endl;
   //    std::cout << "Last Name: " + LastName << std::endl;
   //    std::cout << "Nickname: " << NickName << std::endl;
   //    std::cout << "Phone Number: " << PhoneNumber << std::endl;
   //    std::cout << "Darkest Secret: " << DarkestSecret << std::endl;
   // }
   // std::string Contact::ft_subs(std::string& str) {
   //   return (str.length() <= 10) ? str : (str.substr(0, 9) + ".");
   // }

   // void  Contact::displayShortInfo(int index) {
   //    std::string FirstName, LastName, NickName;

   //    FirstName = this->getFname();
   //    LastName = this->getLname();
   //    NickName = this->getNeckName();
   //    std::cout << "|" << std::setw(10)  << index   << "|" << std::setw(10)  << ft_subs(FirstName) << "|" << std::setw(10) << ft_subs(LastName)  << "|" << std::setw(10) << ft_subs(NickName) << "|" << std::endl;
   // }

//    bool    Contact::setFname(void) {
//       std::string fName;
//       std::cout << "Enter the first name" << std::endl;
//       std::getline(std::cin, fName);
//       if (fName.empty() || !isAllAlpha(fName)) {
//          std::cout << "Field cannot be blank or not alpha !!" << std::endl;
//          return (false);
//       }
//       else
//       {
//          this->FirstName = fName;
//          return (true);
//       }
//    }

//    bool    Contact::setLname(void) {
//       std::string lName;
//       std::cout << "Enter the last name" << std::endl;
//       std::getline(std::cin, lName);
//       if (lName.empty() || !isAllAlpha(lName)) {
//          std::cout << "Field cannot be blank or not alpha !!" << std::endl;
//          return (false);
//       }
//       else
//       {
//          this->LastName = lName;
//          return (true);
//       }
//    }

//    bool    Contact::setNeckName(void) {
//       std::string neckName;
//       std::cout << "Enter the neck name" << std::endl;
//       std::getline(std::cin, neckName);
//       if (neckName.empty() || !isAllAlpha(neckName)) {
//          std::cout << "Field cannot be blank or not alpha !!" << std::endl;
//          return (false);
//       }
//       else
//       {
//          this->NickName = neckName;
//          return (true);
//       }
//    }

//    bool    Contact::setPnumber(void) {
//       std::string pNumber;
//       std::cout << "Enter the phone number" << std::endl;
//       std::getline(std::cin, pNumber);
//       if (pNumber.empty() || !isAllDigits(pNumber)) {
//          std::cout << "Field cannot be blank or not a number !!" << std::endl;
//          return (false);
//       }
//       else
//       {
//          this->PhoneNumber = pNumber;
//          return (true);
//       }
//    }
//    bool    Contact::setDarkestSecret(void) {
//       std::string dSecret;
//       std::cout << "Enter the darkest Secret" << std::endl;
//       std::getline(std::cin, dSecret);
//       if (dSecret.empty()) {
//          std::cout << "Field cannot be blank!!" << std::endl;
//          return (false);
//       }
//       else
//       {
//          this->DarkestSecret = dSecret;
//          return (true);
//       }
//    }
// bool    Contact::newContact(void) {
//    std::string firstNameCopy = this->FirstName;
//    std::string lastNameCopy = this->LastName;
//    std::string phoneNumberCopy = this->PhoneNumber;
//    std::string darkestSecretCopy = this->DarkestSecret;
//    std::string nickNameCopy = this->NickName;

//    if (   !this->setFname()
//       or !this->setLname()
//       or !this->setNeckName()
//       or !this->setPnumber()
//       or !this->setDarkestSecret())
//    {
//       this->FirstName = firstNameCopy;
//       this->LastName = lastNameCopy;
//       this->NickName = nickNameCopy;
//       this->PhoneNumber = phoneNumberCopy;
//       this->DarkestSecret = darkestSecretCopy;
//       return (false);
//    }
//    return (true);
// }

//  class PhoneBook {
//    public:
//       Contact  contacts[8];
//       int current;
//       PhoneBook(){};
//       void ADD(void);
//       void Display();
//       void displayContacts();
//       void DisplayWithIndex(int index);
//       int ValidIndex(std::string index);
//  };

//    void  PhoneBook::ADD(void) {
//       current = 0;
//       if (current < 8)
//          this->contacts[current++].newContact();
//       else
//          contacts[0].newContact();
//  };

//    void PhoneBook::DisplayWithIndex(int index) {
//       contacts[index - 1].displayFullInfo();
//    }
//    void PhoneBook::Display() {
//       std::cout << "|  Index   |First Name|Last Name | Nickname |" << std::endl;
//       std::cout << "|----------|----------|----------|----------|" << std::endl;
//       for (int i = 0; i < current; i++) {
//          contacts[i].displayShortInfo(i + 1);
//       }
//       std::cout << std::endl;
// }
//    int PhoneBook::ValidIndex(std::string index) {
//       int j;
//       for (size_t i = 0; i < index.length(); i++) {
//         if (!std::isdigit((char)index[i]))
//             return 0;
//       }
//       j = atoi(index.c_str());
//       return (j > 0 && j <= current) ? j : 0;
//    }


 int main()
 {
   std::string cmd;
   PhoneBook phonebook;
   while (1)
   {
      std::cout << "ENTER ADD or SEARCH or EXIT\n";
      std::getline(std::cin, cmd);
      if (cmd.empty()) {
         clearerr(stdin);
         std::cin.clear();
      }
      else if (cmd == "ADD") {
         phonebook.ADD();
         // std::cin.ignore();
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
      else
         std::cout << "invalid choise" << std::endl;
   }
 }
