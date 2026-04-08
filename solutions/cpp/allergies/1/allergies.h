#pragma once
#include <string>
#include <map>
#include <unordered_set>

namespace allergies {
    class allergy_test{
    private: 
        unsigned int score; 
        std::map<unsigned int, std::string> allergie_list {{1, "eggs"}, {2, "peanuts"}, {4, "shellfish"}, {8, "strawberries"},{16, "tomatoes"}, {32, "chocolate"},  {64, "pollen"}, {128, "cats"}}; 
    
    public:
        allergy_test(unsigned int allergie_score);
        std::unordered_set<std::string> get_allergies();
        bool is_allergic_to(std::string allergie);
     };

       
}  // namespace allergies
