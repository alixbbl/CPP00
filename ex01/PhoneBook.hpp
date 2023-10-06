/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibourb <alibourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:15:51 by alibourb          #+#    #+#             */
/*   Updated: 2023/10/06 16:44:49 by alibourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define SUCCESS 0

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include "Contact.hpp"

// on definit un constructeur par defaut dans les donnees publiques

class PhoneBook {
    public:
        PhoneBook() : nbrContacts(0) {}
        void    _add(void); // fonctions de gestion du phonebook
        void    _search(void);
        void    _exit(void);
        void    display_upper_frame(void); // fonctions d'affichage
        void    display_bottom_frame(void);
        void    display_allContacts(void);
    private:
        int     nbrContacts;
        Contact _contacts[8];
};

#endif
