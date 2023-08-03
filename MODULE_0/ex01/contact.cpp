 /* * * * * * * * * * * * * * * * * * * * * **
 **    _    __ ______       _   __ ____     **
 **   | |  / // ____/      / | / // __ \    **
 **   | | / // __/ ______ /  |/ // / / /    **
 **   | |/ // /___/_____// /|  // /_/ /     **
 **   |___//_____/      /_/ |_/ \____/      **
 ** * * * * * * * * * * * * * * * * * * * * **
 ** Created Date: July 30th 2023, 15:19     **
 ** Author: Allal El Bakouri (ael-bako)     **
 ** Github: ve-no                           **
 ** * * * * * * * * * * * * * * * * * * * * */

   #include "contact.hpp"

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

   void    Contact::setFname(void) {
      std::string fName;
      while (fName.empty() || !isAllAlpha(fName)) {
         getNextLine("Enter the first name ", fName);
         if (!isAllAlpha(fName))
            std::cout << "name most be all alpha" << std::endl;
      }
      FirstName = fName;
   }

   void    Contact::setLname(void) {
      std::string lName;
      while (lName.empty() || !isAllAlpha(lName)) {
         getNextLine("Enter the last name ", lName);
         if (!isAllAlpha(lName))
            std::cout << "name most be all alpha" << std::endl;
      }
      LastName = lName;
   }

   void    Contact::setnickName(void) {
      std::string nickName;
      while (nickName.empty()) {
         getNextLine("Enter the neck name ", nickName);
      }
      NickName = nickName;
   }

   void    Contact::setPnumber(void) {
      std::string pNumber;
      while (pNumber.empty() || !isAllDigits(pNumber)) {
         getNextLine("Enter the phone number ", pNumber);
         if (!isAllDigits(pNumber))
            std::cout << "name most be all number" << std::endl;
      }
      PhoneNumber = pNumber;
   }
   void    Contact::setDarkestSecret(void) {
      std::string dSecret;
      while (dSecret.empty()) {
         getNextLine("Enter the darkest Secret ", dSecret);
      }
      DarkestSecret = dSecret;
   }
int    Contact::newContact(void) {
      setFname();
      setLname();
      setnickName();
      setPnumber();
      setDarkestSecret();
      return (1);
}
