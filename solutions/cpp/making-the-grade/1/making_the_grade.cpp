#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {

    std::vector <int> rounded_scores {}; 
    for(auto n : student_scores)
    {
        rounded_scores.push_back(static_cast<int>(n));     
    }
    return rounded_scores; 
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {

    int failling_count {}; 
    for(auto score : student_scores)
    {
       if(score <= 40)
           failling_count++;
    }
    return failling_count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {

    int grade_range = (highest_score - 40) / 4;   
    std::array<int,4> grade_interval {}; 
    grade_interval[0] = 41; 
    
    for(int i = 1; i < grade_interval.size(); i++)
    {
       grade_interval[i] = grade_interval[i-1] + grade_range;    
    }
    return grade_interval;
}

std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {

    std::vector <std::string> student_ranking_list; 

    if(student_scores.size() == student_names.size())
    {
        for(int i = 0; i < student_scores.size(); i++)
        {
           student_ranking_list.push_back(std::to_string(i+1) + ". " + student_names.at(i) + ": " + std::to_string(student_scores.at(i))); 
        }
    }
    return student_ranking_list;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {

    std::string perfect_scorer = ""; 
    for(unsigned int i=0; i < student_scores.size(); i++)
    {
         if(student_scores[i] == 100)
         { 
           perfect_scorer = student_names[i];
           break;
         }
    }

    return perfect_scorer;
}
