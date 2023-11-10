/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibourb <alibourb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:43:23 by alibourb          #+#    #+#             */
/*   Updated: 2023/11/10 11:45:38 by alibourb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {

    std::string input;
    PhoneBook   MyPhoneBook;

    while(true) {

        std::cout << "My PhoneBook > ";
        std::getline(std::cin, input);
        if (input == "EXIT" || input == "exit" || std::cin.eof()) {
            if (input == "exit")
                std::cout << "(Please use MAJ on commands.)" << std::endl;
            MyPhoneBook._exit();
        }
        else if (input == "ADD" || input == "add") {
            if (input == "add")
                std::cout << "(Please use MAJ on commands.)" << std::endl;
            MyPhoneBook._add();
        }
        else if (input == "SEARCH" || input == "search") {
            if (input == "search")
                std::cout << "(Please use MAJ on commands.)" << std::endl;
            MyPhoneBook._search();
        }
    }
    return (0);
}
