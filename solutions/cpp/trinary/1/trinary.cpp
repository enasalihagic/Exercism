#include "trinary.h"

namespace trinary {

    int to_decimal(std::string str)
    {
         int sum{0};
         int power = str.size() - 1;
         int digit{0};
        
         for(char c : str) 
         {
              digit = c - '0';
              if(digit < 0 || digit > 2)
              {
                  return 0;
              }
             else
              {       
                  sum += digit * pow(3,power);
                  power--;
              }
         }

        return sum;
    }
// TODO: add your solution here

}  // namespace trinary
