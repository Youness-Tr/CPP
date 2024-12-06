#include "contact.hpp"

void search_book(phonebook &phonebook)
{
    std::string input;
    std::cout << "   index  | first name| last name | nickname  | phone_number\n";
    std::cout << "------------------------------------------------------------\n";

    for (int i = 0; i < 8; i++)
    {
        if (!phonebook.contacts[i].getter("first_name").empty())
        {
            std::cout << "     " << i << "    |";
            std::cout << std::setw(10) << edit(phonebook.contacts[i].getter("first_name")) << " | ";
            std::cout << std::setw(10) << edit(phonebook.contacts[i].getter("last_name")) << " | ";
            std::cout << std::setw(10) << edit(phonebook.contacts[i].getter("nickname")) << " | ";
            std::cout << std::setw(10) << edit(phonebook.contacts[i].getter("phone_number")) << "\n";
        }
    }
    std::cout << "Enter an index to search: ";
    std::getline(std::cin, input);

    if (input.size() == 1 && input[0] >= '0' && input[0] <= '7')
    {
        int index = input[0] - '0';
        if (!phonebook.contacts[index].getter("first_name").empty())
        {
            std::cout << "First name: " << phonebook.contacts[index].getter("first_name") << "\n";
            std::cout << "Last name: " << phonebook.contacts[index].getter("last_name") << "\n";
            std::cout << "Nickname: " << phonebook.contacts[index].getter("nickname") << "\n";
            std::cout << "Phone number: " << phonebook.contacts[index].getter("phone_number") << "\n";
        }
        else
            std::cout << "No contact found\n";
    }
    else
        std::cout << "Invalid input\n";
}