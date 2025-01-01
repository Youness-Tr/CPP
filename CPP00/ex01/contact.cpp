#include "contact.hpp"

void contact::setter(std::string first, std::string last, std::string nick,
            std::string phone, std::string darkest_secre)
{
            if (first.empty() || last.empty() || nick.empty() || phone.empty() || darkest_secre.empty())
            {
                std::cout << "Invalid input\n";
                return;
            }
            this->first_name = first;
            this->last_name = last;
            this->nickname = nick;
            this->phone_number = phone;
            this->darkest_secre = darkest_secre;
}

std::string contact::getter(std::string data)
{
            if (data == "first_name")
                return this->first_name;
            else if (data == "last_name")
                return this->last_name;
            else if (data == "nickname")
                return this->nickname;
            else if (data == "phone_number")
                return this->phone_number;
            else if (data == "darkest secre")
                return this->darkest_secre;
            return NULL;
}
