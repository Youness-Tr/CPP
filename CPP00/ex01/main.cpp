#include "contact.hpp"


int main()
{
    phonebook phonebook;

    std::string input;
    while (1)
    {
        std::cout << "Enter a command: ";
        std::getline(std::cin, input);
        if (input == "EXIT")
            break;
        else if (input == "ADD")
            add_contact(phonebook);
        else if (input == "SEARCH")
            search_book(phonebook);
        else
            std::cout << "Invalid command\n";
    }
    return (0);
}
// ? setw() // function is used to set the width of the field.
// then we can check size of the string and if it is greater than 10 then we can use substr() function to get the first 10 characters of the string and  
// add '.' then print it.
