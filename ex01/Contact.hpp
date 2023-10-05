#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {

    /* on entre pour chaque contact les infos requises par le sujet */
    private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkestSecret;
    bool        only_digits(std::string str);
    bool        only_alpha(std::string str);

    /* on prevoit un constructeur pour initialiser a vide... */
    public:
    Contact() : _firstName(""), _lastName(""), _phoneNumber(""), _darkestSecret("") {}
    /* et des methodes, les regles internes de la classe */
    /* mettre une fonction specifique en cas de champs vide ? ou contact vide ? */
    bool        set_firstName(std::string str);
    bool        set_lastName(std::string str);
    bool        set_nickName(std::string str);
    bool        set_phoneNumber(std::string str);
    bool        set_darkestSecret(std::string str);
    void        display_Contact(int _contactId);
    std::string get_firstName();
    std::string get_lastName();
    std::string get_nickName();
    std::string get_phoneNumber();
    std::string get_darkestSecret();
};

#endif