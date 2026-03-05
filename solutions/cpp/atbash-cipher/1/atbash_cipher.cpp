#include "atbash_cipher.h"

namespace atbash_cipher {

    std::string encode(std::string str)
    {
        std::string encoded_string = ""; 
        std::string encoded_string_no_space = ""; 
        int counter{0}; 

        for(char c : str)
        {
            if(c >= 'a' && c <= 'z')
            {
               encoded_string_no_space += 'z' - (c - 'a'); 
            }
            else if((c >= 'A' && c <= 'Z'))
            {
                c = c + 32; 
                encoded_string_no_space += 'z' - (c - 'a'); 
            }
            else if(c >= '0' && c <= '9')
            {
                encoded_string_no_space += c;
            }
            else
            {
                /* nothing to do */ 
            }
        }

        for(char c : encoded_string_no_space)
        {
           if(counter > 0 && counter % 5 == 0)
           {
               encoded_string += ' '; 
           }
            
           encoded_string += c; 
           counter++;

        }

        return encoded_string;
             
    }

    std::string decode(std::string str) // Ispravljeno sa std::string
    {
        std::string decoded_string = ""; 

        for(char c : str)
        {
            if(c >= 'a' && c <= 'z')
            {
               decoded_string += 'z' - (c - 'a'); 
            }
            else if(c >= '0' && c <= '9') // Brojeve zadržavamo
            {
                decoded_string += c;
            }
            // Razmake i ostalo preskačemo (nema else bloka koji ih dodaje)
        }

        return decoded_string;
    }
// TODO: add your solution here

}  // namespace atbash_cipher
