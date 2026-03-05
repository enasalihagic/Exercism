#include "reverse_string.h"

namespace reverse_string {

/*    std::string reverse_string(const std::string& str)
    {
        std::string reversed_string = str; 
        std::reverse(reversed_string.begin(), reversed_string.end()); 
        return reversed_string;
    }
*/

    std::string reverse_string(std::string str)
    {
        for(size_t i = 0; i < str.size()/2; i++)
        {
            std::swap(str[i], str[str.size() - 1 - i]); 
        }
        return str;
    }
}  // namespace reverse_string
