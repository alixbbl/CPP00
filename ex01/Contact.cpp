/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibourb <alibourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:59:15 by alibourb          #+#    #+#             */
/*   Updated: 2023/10/06 17:04:43 by alibourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

/******************************************************************************/
/*                                  SETTERS                                   */
/******************************************************************************/

bool    Contact::set_firstName(std::string str) {
    if (str.empty()) {
        return false;
    }
    else if (!only_alpha(str)) {
        std::cout << "Error : You can only use letters and hyphens."
            << std::endl;
        return false;
    }
    str[0] = std::toupper(str[0]);
    this->_firstName = str;
    return true;
}

bool    Contact::set_lastName(std::string str) {
    if (str.empty()) {
        return false;
    }
    else if (!only_alpha(str)) {
        std::cout << "Error : You can only use letters and hyphens."
            << std::endl;
        return false;
    }
    for (std::string::iterator it = str.begin(); it < str.end() ; it++)
       *it = std::toupper(*it);
    this->_lastName = str;
    return true;
}

bool    Contact::set_nickName(std::string str) {
    if (str.empty()) {
        return false;
    }
    else if (!only_alpha(str)) {
        std::cout << "Error : You can only use letters and hyphens."
            << std::endl;
        return false;
    }
    str[0] = std::toupper(str[0]);
    this->_nickName = str;
    return true;
}

bool    Contact::set_phoneNumber(std::string str) {
    if (str.empty()) {
        return false;
    }
    else if (!only_digits(str)) {
        std::cout << "Error : You can only use plus sign and digits."
            << std::endl;
        return false;
    }
    this->_phoneNumber = str;
    return true;
}

bool    Contact::set_darkestSecret(std::string str) {
    if (str.empty()) {
        return false;
    }
    this->_darkestSecret = str;
    return true;
}

/******************************************************************************/
/*                                   GETTERS                                  */
/******************************************************************************/

std::string Contact::get_firstName(){
    return (this->_firstName);
}

std::string Contact::get_lastName() {
    return (this->_lastName);
}

std::string Contact::get_nickName() {
    return (this->_nickName);
}

std::string Contact::get_phoneNumber() {
    return (this->_phoneNumber);
}

std::string Contact::get_darkestSecret() {
    return (this->_darkestSecret);
}

/******************************************************************************/
/*                                CONTACT UTILS                               */
/******************************************************************************/

bool    Contact::only_digits(std::string str) {
    for (std::string::iterator it = str.begin(); it != str.end(); it++) {
        if (!std::isdigit(*it) && *it != ' ' && *it != '+')
            return false;
    }
    return true;
}

bool    Contact::only_alpha(std::string str) {
    for (std::string::iterator it = str.begin(); it != str.end(); it++) {
        if (!std::isalpha(*it) && *it != ' ' && *it != '+')
            return false;
    }
    return true;
}

/******************************************************************************/
/*                                DISPLAY UTILS                               */
/******************************************************************************/

void Contact::display_Contact(int _contactId) {
    if (_contactId >= 1 && _contactId <= 8) { // Assurez-vous que l'ID est valide
        // Utilisez l'ID pour accéder au contact correspondant dans le tableau
        int index = _contactId - 1; // L'ID commence généralement à 1
        std::cout << "Contact ID: " << _contactId << std::endl;
        std::cout << "First Name: " << this->_firstName[index] << std::endl;
        std::cout << "Last Name: " << this->_lastName[index] << std::endl;
        std::cout << "Nickname: " << this->_nickName[index] << std::endl;
        std::cout << "Phone Number: " << this->_phoneNumber[index] << std::endl;
        std::cout << "Darkest Secret: " << this->_darkestSecret[index] << std::endl;
        std::cout << std::endl;
    } else {
        std::cout << "Please enter a valid contact ID (1-8)." << std::endl;
    }
}
