#include "allergies.h"

namespace allergies {

allergy_test::allergy_test(unsigned int allergie_score) : score{allergie_score} {}
    
std::unordered_set<std::string> allergy_test:: get_allergies()
{
    std::unordered_set<std::string> result; 
    
    for(const auto& [bit_value, name] : allergie_list)
        {
            if((score & bit_value) > 0)
            {
                result.emplace(name);
            }
        }
    return result;
}

bool allergy_test::is_allergic_to(std::string allergie)
{
    auto current_allergies = get_allergies(); 
    return current_allergies.find(allergie) != current_allergies.end();
}

}  // namespace allergies
