#include "vehicle_purchase.h"

namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.
bool needs_license(std::string kind) {
    // TODO: Return true if you need a license for that kind of vehicle.
    return (kind == "car" || kind == "truck");
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {

    std::string choosen_vehicle; 
    if(option1 < option2) 
    {
        choosen_vehicle = option1 + " is clearly the better choice."; 
    }
    else
    {
        choosen_vehicle = option2 + " is clearly the better choice."; 
    }
    return choosen_vehicle;
    
    /* moglo je i ovako 
    choosen_vehicle = (option1 < option2) ? option1 : option2; 
    return choosen_vehicle + " is clearly the better choice"; 
    */
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    // TODO: Return the age-corrected resell price.

    if(age > 0 && age < 3)
    {
        return (80*original_price)/100; 
    }
    else if (age >= 10)
    {
        return (50*original_price)/100; 
    }
    else
    {
        return (70*original_price)/100; 
    }
}

}  // namespace vehicle_purchase
