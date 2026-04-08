#include "rotational_cipher.h"

namespace rotational_cipher {

    std::string rotate(std::string str, int rotation)
    {
        std::string rotated_string = "";
        for(char c : str) 
        {
           if(c >= 'a' && c <= 'z')
           {
               rotated_string += 'a' + ((c - 'a' + rotation) % 26);  
           }
           else if(c >= 'A' && c <= 'Z')
           {
               rotated_string += 'A' + ((c - 'A' + rotation) % 26);
               
           }
            else
           {
               rotated_string += c; 
           }
        }
        return rotated_string;
    }    
}