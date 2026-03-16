#include <iostream>
using namespace std; 



int main(){
	
	cout << "Hello Welcome to Carpet Cleaning Service"<<endl;
	
	cout << "\nHow many small rooms would you like cleaned? "; 
	
	int number_of_small_rooms{0}; 
	cin >> number_of_small_rooms; 
	
	cout << "\nHow many large rooms would you like cleaned? "; 
	int number_of_large_rooms{0}; 
	cin >> number_of_large_rooms; 
	
	const double price_per_small_room{25.0};
	const double price_per__large_room{35.0};
	
	const double sales_tax{0.06}; 
	const int estimate_expiry{30}; 
	
	cout << "\nEstimated for carpet cleaning service" << endl;
	cout << "Number of small rooms: " << number_of_small_rooms <<endl;
	cout << "Number of large rooms: " << number_of_large_rooms <<endl;
	cout << "Price per small room: $" << price_per_small_room << endl; 
	cout << "Price per small room: $" << price_per__large_room << endl; 
	double cleaning_cost = (price_per_small_room * number_of_small_rooms) +  (price_per__large_room * number_of_large_rooms);
	cout << "Cost: $" << cleaning_cost << endl;
	cout << "Tax: $" << cleaning_cost * sales_tax << endl;  
	cout << " =====================================" << endl; 
	cout << "Total estimate is: $ " << cleaning_cost + (cleaning_cost * sales_tax) << endl; 
	cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
	return 0;
}