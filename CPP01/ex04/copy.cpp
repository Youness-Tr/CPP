#include "copy.hpp"

std::string ft_replace(std::string line, std::string s1, std::string s2)
{
    while (line.find(s1) != std::string::npos){
    int pos = line.find(s1);
        if (pos != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
        }
    }
    return line;
}

// class exam {
//     private :
//         int a;
//         int b;
//     public : 
//         exam();
//         ft(int a);
//         exam(const exam& other); // coopy constructor
//         exam& operator=(const exam& other); // copy assignemet constructor
//         ~exam();
// }
// x * factor = int;
// x / factor

// int main()
// {
//     exam a;
//     std::cout << a ;
//     exam b;
//     opertaion()
//     {
//         exam c;

//     }
//  x * (1 << n)
//     exam c(a);
//     b = a;
// }


// int& a;
// int x;  ft(int &g);
// ft(&x);