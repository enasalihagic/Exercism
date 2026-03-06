#include "armstrong_numbers.h"


namespace armstrong_numbers {
bool is_armstrong_number(int number) {
    // 1. Prvo moramo saznati koliko broj ima cifara
    int temp1 = number;
    int number_of_digits = 0;
    
    if (temp1 == 0) number_of_digits = 1; // Poseban slučaj za nulu
    
    while (temp1 > 0) {
        temp1 /= 10;
        number_of_digits++;
    }

    // 2. Sada idemo cifru po cifru i stepenujemo
    int temp2 = number;
    long long total_sum = 0; // Koristimo long long jer suma može biti velika

    while (temp2 > 0) {
        int digit = temp2 % 10; // Uzmemo zadnju cifru (npr. 3 iz 153)
        
        // --- UNUTRAŠNJA PETLJA ZA STEPENOVANJE ---
        long long digit_power = 1; 
        for (int i = 0; i < number_of_digits; i++) {
            digit_power *= digit; // Množimo cifru samu sa sobom
        }
        // ------------------------------------------

        total_sum += digit_power; // Dodamo rezultat u ukupnu sumu
        temp2 /= 10; // Odbacimo tu cifru i idemo na sledeću (153 postane 15)
    }

    // 3. Na kraju proverimo da li je suma ista kao originalni broj
    return total_sum == (long long)number;
}

}  // namespace armstrong_numbers  // namespace armstrong_numbers
