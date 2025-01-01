#include "phonebook.hpp"

void phonebook::add_contact()
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secre;

    static int i;
    while (i < 8)
    {
            std::cout << "Enter first name:: ";
            first_name = ft_getline();
            std::cout << "Enter last name:: ";
            last_name = ft_getline();
            std::cout << "Enter nickname:: ";
            nickname = ft_getline();
            std::cout << "Enter phone number:: ";
            phone_number = ft_getline();
            std::cout << "Enter darkest secre:: ";
            darkest_secre = ft_getline();
            contacts[i].setter(first_name, last_name, nickname, phone_number, darkest_secre);
        i++;
        if (i == 8)
            i = 0;
        break;
    }
}

void phonebook::search_book()
{
    std::string input;
    std::cout << "|  index  |first name| last name| nickname |\n";
    std::cout << "|---------|----------|----------|----------|\n";

    for (int i = 0; i < 8; i++)
    {
        if (!contacts[i].getter("first_name").empty())
        {
            std::cout << "|    " << i << "    |";
            std::cout << std::setw(10) << edit(contacts[i].getter("first_name")) << "|";
            std::cout << std::setw(10) << edit(contacts[i].getter("last_name")) << "|";
            std::cout << std::setw(10) << edit(contacts[i].getter("nickname")) << "|\n";
        }
    }
    std::cout << "Enter an index to search: ";
    input = ft_getline();

    if (input.size() == 1 && input[0] >= '0' && input[0] <= '7')
    {
        int index = input[0] - '0';
        if (!contacts[index].getter("first_name").empty())
        {
            std::cout << "First name: " << contacts[index].getter("first_name") << "\n";
            std::cout << "Last name: " << contacts[index].getter("last_name") << "\n";
            std::cout << "Nickname: " << contacts[index].getter("nickname") << "\n";
            std::cout << "Phone number: " << contacts[index].getter("phone_number") << "\n";
            std::cout << "darkest secre: " << contacts[index].getter("darkest secre") << "\n";
        }
        else
            std::cout << "No contact found\n";
    }
    else
        std::cout << "Invalid input\n";
}

std::string phonebook::edit(std::string data)
{
    if (data.size() > 10)
        return (data.substr(0, 9) + '.');
    else 
        return (data);
}

std::string phonebook::ft_getline(){
    std::string input;
    if (!getline(std::cin, input))
        exit(1);
    return (input);
}
