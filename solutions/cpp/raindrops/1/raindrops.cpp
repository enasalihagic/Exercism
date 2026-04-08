#include "raindrops.h"

/* Your task is to convert a number into its corresponding raindrop sounds.

If a given number:
is divisible by 3, add "Pling" to the result.
is divisible by 5, add "Plang" to the result.
is divisible by 7, add "Plong" to the result.
is not divisible by 3, 5, or 7, the result should be the number as a string.
Examples
28 is divisible by 7, but not 3 or 5, so the result would be "Plong".
30 is divisible by 3 and 5, but not 7, so the result would be "PlingPlang".
34 is not divisible by 3, 5, or 7, so the result would be "34".
*/


namespace raindrops {

    std::string convert(size_t number)
    {
        std::string str1 = "Pling"; 
        std::string str2 = "Plang"; 
        std::string str3 = "Plong"; 
        std::string final_string; 
        
        if(number % 3 == 0) final_string += "Pling";        
        if(number % 5 == 0) final_string += "Plang"; 
        if(number % 7 == 0) final_string += "Plong"; 
         
        /* proverava da je string i dalje prazan, znaci nije deljiv ni sa cim */
        if(final_string.empty()) return std::to_string(number); 
        
        return final_string;       
    }
} 
