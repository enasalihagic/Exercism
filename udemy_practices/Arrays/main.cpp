#include <iostream>
using namespace std; 

int main(){
	
	char vowels[] {'a','e','i','o','u'};
	cout << "\nThe first vowel is: " << vowels[0] << endl;

	//cin >> vowels[5]; out of bounds - dont do this
	
	double hi_temps[] {90.1, 89.8, 77.5, 81.6};
	cout << "\nThe first high temperature is: " << hi_temps[0] << endl;
	
	hi_temps[0] = 100.7;
	
	cout << "\nThe first temperature now is: " << hi_temps[0] << endl;
	
	int test_scores[5] {};  // inicijalizovace sve na 0
	
	//int test_scores[5] {100};  ovo ce inicijalizovati samo prvi element, a ostale na 0
	
	cout << "1 score : " << test_scores[0] << endl; 
	cout << "2 score : " << test_scores[1] << endl; 
	cout << "3 score : " << test_scores[2] << endl; 
	cout << "4 score : " << test_scores[3] << endl; 
	cout << "5 score : " << test_scores[4] << endl; 
	
	cout << "Enter 5 scores: " << endl; 
	cin >> test_scores[0]; 
	cin >> test_scores[1];
	cin >> test_scores[2];
	cin >> test_scores[3];
	cin >> test_scores[4];
	
	cout << "1 score : " << test_scores[0] << endl; 
	cout << "2 score : " << test_scores[1] << endl; 
	cout << "3 score : " << test_scores[2] << endl; 
	cout << "4 score : " << test_scores[3] << endl; 
	cout << "5 score : " << test_scores[4] << endl; 
	
	cout << "Notice what value name of array is " << test_scores << endl; //memorijska adresa
	
	return 0;
}