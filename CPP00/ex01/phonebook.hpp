#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "contact.hpp"

class phonebook {
    private :
        contact contacts[8];
    public :
        void add_contact();
        void search_book();
        std::string edit(std::string data);
        std::string ft_getline();
};

#endif
