#include "bob.h"

namespace bob {

    std::string hey(std::string input)
    {
        auto start = input.find_first_not_of(" \t\n\r"); 
        if(start == std::string::npos)
        {
            return "Fine. Be that way!"; 
        }
        auto end = input.find_last_not_of(" \t\n\r");
        std::string text = input.substr(start, end - start + 1);  //start je gde pocinje, "  Zdravo  ", 0 i 1 razmak, 2 pocije string, end - start +1  = 7-2 +1 = 6, to je duzina substringa
        bool is_question = text.back() == '?'; 
        bool has_letters = any_of(text.begin(), text.end(), [](unsigned char c) { return isalpha(c);}); 
        bool is_yelling = has_letters && all_of(text.begin(), text.end(), [](unsigned char c) {return !islower(c);});

        if(is_yelling && is_question) return "Calm down, I know what I'm doing!";
        if(is_yelling) return "Whoa, chill out!";
        if(is_question) return "Sure.";

        return "Whatever.";     
    }

}  // namespace bob
