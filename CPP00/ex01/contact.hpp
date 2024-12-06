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
            std::string phone)
        {
            if (first.empty() || last.empty() || nick.empty() || phone.empty())
            {
                std::cout << "Invalid input\n";
                return;
            }
            this->first_name = first;
            this->last_name = last;
            this->nickname = nick;
            this->phone_number = phone;
        }
        std::string getter(std::string data)
        {
            if (data == "first_name")
                return this->first_name;
            else if (data == "last_name")
                return this->last_name;
            else if (data == "nickname")
                return this->nickname;
            else if (data == "phone_number")
                return this->phone_number;
            return NULL;
        }
};

class phonebook {
    public :
        contact contacts[8];
};

void add_contact(phonebook &phonebook);
void search_book(phonebook &phonebook);
std::string edit(std::string data);