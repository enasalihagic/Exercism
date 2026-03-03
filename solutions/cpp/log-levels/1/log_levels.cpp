#include <string>

/* Instructions
In this exercise, you'll be processing lines from a logged report. Each log line is a string formatted as follows: "[<LEVEL>]: <MESSAGE>".
There are three different log levels:
INFO
WARNING
ERROR
You have three tasks, each of which will take a log line and ask you to do something with it.

1. Get the message from a log line
Implement the log_line::message method to return a log line's message:
log_line::message("[ERROR]: Invalid operation")
// => "Invalid operation"

2. Get the log level from a log line
Implement the log_line::log_level method to return a log line's log level, which should be returned in uppercase:
log_line::log_level("[ERROR]: Invalid operation")
// => "ERROR"

3. Reformat a log line
Implement the log_line::reformat method that reformats the log line, putting the message first and the log level after it in parentheses:
log_line::reformat("[INFO]: Operation completed")
// => "Operation completed (INFO)"
*/

/* "  Hvala ti!  "
Šta se dešava korak po korak:
Originalna dužina: String ima ukupno 13 karaktera (2 razmaka + 9 slova/znaka + 2 razmaka).first: Funkcija nađe da prvo slovo 'H' počinje na indeksu 
2.last: Funkcija nađe da poslednji znak '!' stoji na indeksu 10.
Matematika (last - first + 1):10 - 2 = 8
8 + 1 = 9
Dakle, naša nova dužina je 9. */ 

/* trim funkcija uklanja tabove, spaceove i nove redove. Izvlaci string bez icega. Zatim se poziva na ceo string koji dodje na konzolu i onda se odatle uzima substring */ 

namespace log_line {
std::string trim(std::string s)
    {
        size_t first = s.find_first_not_of(" \t\r\n");
        if(first == std::string::npos) return "";
        size_t last = s.find_last_not_of(" \t\r\n"); 
        return s.substr(first, last - first + 1);  
    }
        
std::string message(std::string line) {
    return trim(line.substr(line.find(":") + 1)); 
}

std::string log_level(std::string line) {
    std::size_t start = line.find("["); 
    std::size_t end = line.find("]"); 
    size_t length = end - start;
    return (line.substr(start+1, length-1)); 
}

std::string reformat(std::string line) {
    std::string brackets_transform = "(" + log_level(line) + ")"; 
    return message(line) + " " + brackets_transform; 
}
}  // namespace log_line
