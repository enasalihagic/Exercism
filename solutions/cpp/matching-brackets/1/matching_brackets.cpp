#include "matching_brackets.h"

namespace matching_brackets {

    bool check(std::string input)
    {
        std::stack<char> stack;
        
   
        for(char c : input)
        {
            if(c == '(' || c == '[' || c == '{')
            {
                stack.push(c); 
            }
            else if(c == ')' || c == ']' || c == '}')
            {
                if(stack.empty())
                {
                    return false;
                }

                char last_opened = stack.top(); 

                if(((c == ')') && (last_opened == '(')) || ((c == ']') && (last_opened == '[')) || ((c == '}') && (last_opened == '{')))
                {
                    stack.pop(); 
                }
                else
                {
                    return false;
                }
            }
                
        }

        return stack.empty();
        
    }

}  // namespace matching_brackets
