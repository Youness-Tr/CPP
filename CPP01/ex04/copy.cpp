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