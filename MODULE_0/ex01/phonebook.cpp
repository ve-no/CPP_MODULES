   #include "contact.hpp"
   #include "phonebook.hpp"
   void  PhoneBook::ADD(void) {
      current = 0;
      if (current < 8)
         this->contacts[current++].newContact();
      else
         contacts[0].newContact();
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

