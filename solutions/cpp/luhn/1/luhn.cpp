#include "luhn.h"

namespace luhn {

    bool valid(std::string str)
    {
        std::string result = ""; 
        int length{0}; 
        int sum{0}; 
        bool valid{false}; 
        bool second_digit{false}; 
        int digit{0};
        
        for(char c : str)
        {
            if(c == ' ')
            {
                continue; //skip space and go on next character
            }
            
            if(c < '0' || c > '9')
            {
                return false;
            } 
            result +=c; 
        }        

        if(result.size() <= 1)
        {
            return false; 
        }
        else
        {
            length = result.size();
        }

        for(int i = length - 1; i >=0; i--)
        {
            digit = (result[i] - '0');

            if(second_digit)
            {
                digit *=2;
                if(digit > 9) digit-=9;
            }
            
            sum+=digit;
            second_digit = !second_digit;
        }

        if(sum % 10 == 0) valid = true;
        
        return valid; 
    }

}  // namespace luhn

