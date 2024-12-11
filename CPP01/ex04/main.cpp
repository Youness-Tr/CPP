#include "copy.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Error: Invalid number of arguments" << std::endl;
        return 1;
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream existfile(filename);

    if (!existfile)
    {
        std::cout << "Error: File does not exist" << std::endl;
        return 1;
    }

    std::ofstream newfile(filename + ".replace");
    
    if (!newfile.is_open())
    {
        std::cout << "Error: couldn't create file" << std::endl;
        return 1;
    }
    std::string line;
    while (getline(existfile, line))
    {
        line = ft_replace(line, s1, s2);
        newfile << line << std::endl;
        std::cout << line << std::endl;
    }
    existfile.close();
    newfile.close();
    return 0;
}
