/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibourb <alibourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:01:56 by alibourb          #+#    #+#             */
/*   Updated: 2023/10/06 16:55:45 by alibourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*
Toujours preciser avant d'utiliser une fonction (getter ou setter), ou une
instance, a quelle classe elles appartiennent.
Utilisation du mot-clef "this->", de type pointeur, et qui permet d'acceder
a l'objet actuel.

Fonction get() : lit un seul char a partir de stdin.

Fonction getline() : lit et stocke la string passee en stdin, \n inclut, lu
mais pas stocke. Elle prend la ligne jusqu'au \n, et le remplace par \0.

Ces deux fonctions sont de la bibli istream.
*/

/******************************************************************************/
/*                                   ADD                                      */
/******************************************************************************/

void    PhoneBook::_add(void) {
    Contact newContact;
    std::string data;

    std::cout << "Please press Enter to create new contact.";
    std::cin.get();
    while (true) {
        std::cout << "First Name : ";
        std::getline(std::cin, data);
        if (data.empty()){
            std::cout << "A firstname is mandatory." << std::endl;
            continue ; }
        if (newContact.set_firstName(data)) 
            break ;
        else
            std::cout << "Invalid firstname, try again." << std::endl; }

    std::cout << "Last Name : ";
    std::getline(std::cin, data);
    newContact.set_lastName(data);

    std::cout << "Nickname : ";
    std::getline(std::cin, data);
    newContact.set_nickName(data);

    std::cout << "Phone Number : ";
    std::getline(std::cin, data);
    newContact.set_phoneNumber(data);

    std::cout << "Darkest Secret : ";
    std::getline(std::cin, data);
    newContact.set_darkestSecret(data);

    this->_contacts[this->nbrContacts] = newContact;
    this->nbrContacts++; }

/******************************************************************************/
/*                                  SEARCH                                    */
/******************************************************************************/

void    PhoneBook::_search(void) {
    std::string research_input;
    int         ID_research;

    if (!PhoneBook::nbrContacts) {
        std::cout << "You have no contact yet !" << std::endl;
        return ; }
    this->display_allContacts();
    std::cerr << "Please enter an ID to find a contact :" << std::endl;
    while(true) {
        std::getline(std::cin, research_input);
        std::cout << "You asked for : " << research_input << "!" << std::endl;
        ID_research = std::atoi(research_input.c_str());
        if (ID_research < 1 || ID_research > 8
            || ID_research > this->nbrContacts)
            std::cerr << "Please enter valid ID (1 to "
                << PhoneBook::nbrContacts << ")." << std::endl;
        else    
            break ; }

    _contacts[ID_research - 1].display_Contact(ID_research); }

/******************************************************************************/
/*                                  EXIT                                      */
/******************************************************************************/

void    PhoneBook::_exit(void) {
    std::cout << "Bye bye !" << std::endl;
    exit (SUCCESS);
}

/******************************************************************************/
/*                             DISPLAY UTILS                                  */
/******************************************************************************/

void	PhoneBook::print_truncate(std::string str) {
	if (str.length() > 10)
		std::cout << std::setw(9) << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
}

void    PhoneBook::display_allContacts(void) {

	std::cout << "\033[1;35m╔════════════╦════════════╦════════════╦════════════╗"
        << std::endl << "║ ";
	std::cout << std::setw(10) << "Id    " << " ║ ";
	std::cout << std::setw(10) << "First Name" << " ║ ";
	std::cout << std::setw(10) << "Last Name " << " ║ ";
	std::cout << std::setw(10) << "Nickname " << " ║ " << std::endl;

	for (int i = 0; i < PhoneBook::nbrContacts ; i++)
	{
		std::cout << "╠════════════╬════════════╬════════════╬════════════╣"
            << std::endl;
		std::cout << "║ " << std::setw(10) << i + 1 << " ║ ";
		PhoneBook::print_truncate(this->_contacts[i].get_firstName());
		std::cout << " ║ ";
		PhoneBook::print_truncate(this->_contacts[i].get_lastName());
		std::cout << " ║ ";
		PhoneBook::print_truncate(this->_contacts[i].get_nickName());
		std::cout << " ║" << std::endl;
	}
	std::cout << "╚════════════╩════════════╩════════════╩════════════╝\033[m"
        << std::endl;
}