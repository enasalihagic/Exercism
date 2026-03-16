#include <iostream>
using namespace std;
#include<string>
#include <algorithm>

void cpp_strings()
{
    string journal_entry_1{"Isaac Newton"}; 
    string journal_entry_2{"Leibniz"}; 
    
    int last_name_index{0}; 
    int whitespace{0};
    
    for(unsigned int i=1; i < journal_entry_1.size(); i++)
    {
      if(isupper(journal_entry_1.at(i)))
      {
        last_name_index = i; 
      }
    }
    
    journal_entry_1.erase(0,last_name_index); 
    
    if(journal_entry_2 < journal_entry_1)
    {
      swap(journal_entry_2, journal_entry_1);
    }
    
    cout << journal_entry_1 << "\n" << journal_entry_2;
}

int main() 
{
    cpp_strings();
    return 0;
}