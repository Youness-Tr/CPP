#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>


class contact {
    private :
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secre;

    public :
        void setter(std::string first, std::string last, std::string nick,
            std::string phone, std::string darkest_secre);
        std::string getter(std::string data);
};

#endif