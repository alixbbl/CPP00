#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
    public:
        PhoneBook() : nbrContacts(0) {}
        void    _add(void);
        void    _search(void);
        void    _exit(void);
        void    display_upper_frame(void);
        void    display_bottom_frame(void);
        void    display_allContacts(void);
    private:
        int     nbrContacts;
        Contact _contacts[8];
};

#endif