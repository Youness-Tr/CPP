#include <iostream>


int main (int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "NO DATA\n";
        return (0);
    }
    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j]; j++)
        {
            std::cout << (char)toupper(argv[i][j]);
        }
    }
    std:: cout << "\n";
}