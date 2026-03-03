#include "hexadecimal.h"

namespace hexadecimal {

    long long convert(std::string str)
    {
         size_t power{0}; 
         size_t to_digit{0};
         long long sum{0};
        
         for(char c : str)
         {
            if(c < '0' || (c > '9' && c < 'A') || (c > 'F' && c < 'a') || c > 'f')   
            {
                return 0;
            }
         }

        power = str.size()-1;
        
        for(char c : str)
        {  
            if(c >= 'a' && c <= 'f')
            {
                to_digit = c - 'a' + 10;    //c - 97 + 10 = dec 10
                sum+= to_digit * pow(16,power); 
            }

            if(c >= 'A' && c <= 'F')
            {
                to_digit = c - 'A' + 10;
                sum+= to_digit * pow(16,power); 
            }

            if(c >= '0' && c <= '9')
            {
                to_digit = c - '0';
                sum+= to_digit * pow(16,power); 
            }

            power--;
        }

        return sum;
    }

    

}  // namespace hexadecimal
