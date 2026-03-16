#include "bob.h"

namespace bob {

   /* std::string hey(std::string input)
    {
        auto start = input.find_first_not_of(" \t\n\r");
        if(start == std::string::npos)
        {
             return "Fine. Be that way!"; 
        }

        auto end = input.find_last_not_of(" \t\n\r"); 
        std::string text = input.substr(start, end - start + 1); 

        bool is_question = text.back() == '?'; 
        bool has_letters = std::any_of(text.start(), text.end(), ::isalpha); 
        bool is_yelling = has_letters && all_of(text.start(), text.end(), )
        

        
    }
*/
    std::string hey(std::string input)
    {
        std::string response = ""; 
        bool lowercase_present = false; 
        bool uppercase_present = false;
        size_t position {0}; 

        for(char c : input)
        {
           if(isupper(c))
           {
               uppercase_present = true; 
           }
           if(islower(c))
           {
              lowercase_present = true; 
           }
        }

        position = input.find_last_not_of(" \t\n\r"); 

        if(position != std::string::npos)
        {
            input.erase(position+1); 
        }
        else
        {
            return "Fine. Be that way!";
        }

        if(uppercase_present && !lowercase_present && input.back() == '?')
        {
            response = "Calm down, I know what I'm doing!";
        }
        else if(uppercase_present && !lowercase_present)
        {
                response = "Whoa, chill out!"; 
        }
        else if(input.length() != 0 && input.back() == '?')
        {
            response = "Sure."; 
        }
        else 
        {
            response = "Whatever."; 
        }

        return response;
    }

}  // namespace bob
