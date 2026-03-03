// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>

/* Instructions
In this exercise, you'll be writing code to help a freelancer communicate with a project manager. Your task is to provide a few utilities to quickly calculate daily and monthly rates, optionally with a given discount.
We first establish a few rules between the freelancer and the project manager:
The daily rate is 8 times the hourly rate.
A month has 22 billable days.
Sometimes, the freelancer is offering to apply a discount on their daily rate (for example for their most loyal customers or not-for-profit customers).
Discounts are modeled as fractional numbers representing percentages, for example, 25.0 (25%).

1. Calculate the daily rate given an hourly rate
Implement a function called daily_rate to calculate the daily rate given an hourly rate as a parameter. The contract defines that a day has 8 billable hours.
daily_rate(60)
// => 480.0
The returned daily rate should be of type double.

2. Calculate a discounted price
Implement a function apply_discount to calculate the price after a discount. It should accept two parameters: the original price and the discount rate in percent.
apply_discount(150, 10)
// => 135.0
The returned value should always be of type double, not rounded in any way.

3. Calculate the monthly rate, given an hourly rate and a discount
Implement a monthly_rate function to calculate the discounted monthly rate. It should have two parameters, an hourly rate and the discount in percent.
monthly_rate(77, 10.5)
// => 12130
The returned monthly rate should be rounded up (take the ceiling) to the nearest integer.

4. Calculate the number of complete workdays given a budget, hourly rate, and discount
Implement a function days_in_budget that takes a budget, an hourly rate, and a discount, and calculates how many complete days of work that covers.
days_in_budget(20'000, 80, 11.0)
// => 35
*/

#include <cmath> 
// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    // TODO: Implement a function to calculate the daily rate given an hourly
    // rate
    return 8 * hourly_rate;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    // TODO: Implement a function to calculate the price after a discount.
    return (before_discount - (discount/100)*before_discount);
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    // TODO: Implement a function to calculate the monthly rate, and apply a
    // discount.
    return std::ceil((apply_discount(22 * daily_rate(hourly_rate), discount)));
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    // TODO: Implement a function that takes a budget, an hourly rate, and a
    // discount, and calculates how many complete days of work that covers.
    double discounted_hourly_rate = apply_discount(hourly_rate, discount); 
    double daily_rate = discounted_hourly_rate * 8;    
    return std::floor(budget / daily_rate );
}
