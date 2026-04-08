#include "reverse_string.h"

namespace reverse_string {

    std::string reverse_string(const std::string& str)
    {
        std::string reversed_string = str; 
        std::reverse(reversed_string.begin(), reversed_string.end()); 
        return reversed_string;
    }

}  // namespace reverse_string
