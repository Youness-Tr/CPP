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

    public :
        void setter(std::string first, std::string last, std::string nick,
            std::string phone);
        std::string getter(std::string data);
};

#endif