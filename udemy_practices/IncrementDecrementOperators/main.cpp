#include <iostream>
using namespace std; 

int main(){

	int counter{0}; 
	int result{0}; 
	
	cout << "Counter : " << counter << endl;
	
	counter++; 
	cout << "Counter : " << counter << endl;
	
	++counter; 
	cout << "Counter : " << counter << endl;
	
	/* Example 2 */ 
	
	counter = 10; 
	result = 0; 
	
	cout << "Counter : " << counter << endl; //10
	
	result = ++counter; 
	cout << "Counter : " << counter << endl; //11 , prvo inkrementuj pa dodeli
	cout << "Result : " << result << endl;  //11 
	
	/* Example 3 */ 
	counter = 10; 
	result = 0; 
	
	cout << "Counter : " << counter << endl; //10
	
	result = counter++; 
	cout << "Counter : " << counter << endl; //11 , prvo dodeli  pa inkr
	cout << "Result : " << result << endl;  //10 
	
	
	/* Example 4 */
	counter = 10; 
	result = 0; 
	
	cout << "Counter : " << counter << endl; //10
	result = ++counter + 10; 
	cout << "Counter : " << counter << endl; 
	cout << "Result : " << result << endl;  
	
	/* Example 5 */
	counter = 10; 
	result = 0; 
	
	cout << "Counter : " << counter << endl; //10
	result = counter++ + 10; 
	cout << "Counter : " << counter << endl; 
	cout << "Result : " << result << endl;  
	
	return 0;
}