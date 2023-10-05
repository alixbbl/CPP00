#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(int ac, char *ag[]) {
    std::string input;
    Contact     NewContact;
    PhoneBook   MyPhoneBook;

    while(true) {
        std::cout << "My PhoneBook > ";
        std::getline(std::cin, input);
        
        if (input == "EXIT" || input == "exit") {
            MyPhoneBook._exit();
        }
        if (input == "ADD" || input == "add") {
            MyPhoneBook._add();
        }
        if (input == "SEARCH" || input == "search") {
            MyPhoneBook._search();
        }
    }
    return (0);   
}

/*   
- FAIRE LES MAKEFILES,
- VERIFIER ORDRES DES INFOS, CONDITIONS ENTREE,
- ATTENTION : NOMBRE MAX DE 8 CONTACTS, A FAIRE.

*/