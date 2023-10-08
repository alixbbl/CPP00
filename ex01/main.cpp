#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {
    std::string input;
    Contact     NewContact;
    PhoneBook   MyPhoneBook;

    while(true) {
        std::cout << "My PhoneBook > ";
        std::getline(std::cin, input);
        if (input == "EXIT" || input == "exit") {
            MyPhoneBook._exit();
        }
        else if (input == "ADD" || input == "add") {
            MyPhoneBook._add();
        }
        else if (input == "SEARCH" || input == "search") {
            MyPhoneBook._search();
        }
    }
    return (0);
}
