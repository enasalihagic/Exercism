#include <string>
#include <vector>

namespace election {

// The election result struct is already created for you:

struct ElectionResult {
    // Name of the candidate
    std::string name{};
    // Number of votes the candidate has
    int votes{};
};

int vote_count(const ElectionResult &res)
{
    return res.votes; 
}

void increment_vote_count (ElectionResult &result, int votes_number)
{
    result.votes += votes_number;
}

ElectionResult &determine_result(std::vector<ElectionResult>& final_count)
{
    ElectionResult *winner = &final_count[0]; 

    for(auto &current_candidate : final_count)
    {
         if(current_candidate.votes > winner->votes)
         {
             winner = &current_candidate; 
         }
    }
    winner->name = "President " + winner->name; 

    return *winner;
}

}  // namespace election
