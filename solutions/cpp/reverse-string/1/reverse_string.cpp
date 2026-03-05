#include "reverse_string.h"

namespace reverse_string {

    std::string reverse_string(std::string str)
    {
        std::string reversed_string = ""; 
        
        for(int i = str.size() - 1; i >= 0; i--)
        {
           reversed_string+= str[i];      
        }

        return reversed_string;
    }

}  // namespace reverse_string
