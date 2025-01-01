#include "phonebook.hpp"

int main()
{
    phonebook phonebook;

    std::string input;
    while (1)
    {
        std::cout << "Enter a command: ";
        input = phonebook.ft_getline();
        if (input == "EXIT")
            break;
        else if (input == "ADD")
            phonebook.add_contact();
        else if (input == "SEARCH")
            phonebook.search_book();
        else
            std::cout << "Invalid command\n";
    }
    return (0);
}
