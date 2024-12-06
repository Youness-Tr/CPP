#include "contact.hpp"

std::string edit(std::string data)
{
    if (data.size() > 10)
        return (data.substr(0, 9) + '.');
    else 
        return (data);
}

void add_contact(phonebook &phonebook)
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;

    static int i;
    while (i < 8)
    {
            std::cout << "Enter first name:: ";
            std::getline(std::cin, first_name);
            std::cout << "Enter last name:: ";
            std::getline(std::cin, last_name);
            std::cout << "Enter nickname:: ";
            std::getline(std::cin, nickname);
            std::cout << "Enter phone number:: ";
            std::getline(std::cin, phone_number);
            phonebook.contacts[i].setter(first_name, last_name, nickname, phone_number);
        i++;
        if (i == 8)
            i = 0;
        break;
    }
}