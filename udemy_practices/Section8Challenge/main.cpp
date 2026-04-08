#include <iostream>
using namespace std; 

// uzmi broj centi, ne daj negativan broj 
// treba da mu vratis kusur i da izracunas kako 
// ako je 92 centa, znaci to je nula dolara
// 92 / 100 = 0
// sledece su quarter, 25 centi
// ako je nula dolara, onda vracas quarter

int main(){

	int num_of_cents{0}; 
	int dollar {};
	int quarter {};
	int dime {};
	int nickel {};
	int penny {};
	int remaining {}; 
	
	cout << "Enter the integer representing the number of cents : "; 
	cin >> num_of_cents; 
	
	if(num_of_cents > 0)
	{
		dollar = num_of_cents / 100; 
		remaining = num_of_cents % 100; 
		
		quarter = remaining / 25; 
		remaining %= 25; 
		
		dime = remaining / 10; 
		remaining %= 10; 
		
		nickel = remaining / 5; 
		remaining %= 5; 
 
		penny = remaining;
	}
	
	cout << "Dollar : " << dollar << endl;
	cout << "Qaarter : " << quarter << endl;
	cout << "Dime : " << dime << endl;
	cout << "Nickel : " << nickel << endl;
	cout << "Penny : " << penny << endl;
	
	return 0;
}