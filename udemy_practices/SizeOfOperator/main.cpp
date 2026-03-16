#include <iostream>
#include <climits> //make sure you include climits for integer types
				   // for floating point is <cfloat>
using namespace std; 

int main()
{
	cout<<"Char: " << sizeof(char) <<endl;
	cout<<"Int: " << sizeof(int) <<endl;
	cout<<"Unsigned Int: " << sizeof(unsigned int) <<endl;
	cout<<"Short: " << sizeof(short) <<endl;
	cout<<"Long: " << sizeof(long) <<endl;
	cout<<"Long long: " << sizeof(long long) <<endl;
	
	cout << " ================================" << endl; 
	
	cout << "Float: " << sizeof(float) << endl; 
	cout << "Double: " << sizeof(double) << endl; 
	cout << "Long Double: " << sizeof(long double) << endl; 
	
	/*   CLIMITS <climits>  */ 
	
	cout << "Char MIN: " << CHAR_MIN << endl; 
	cout << "Int MIN: " << INT_MIN << endl; 
	cout << "Short MIN: " << SHRT_MIN << endl; 
	cout << "Long MIN: " << LONG_MIN << endl; 
	cout << "Long long MIN: " << LLONG_MIN << endl;
	
	
	cout << "Char MAX: " << CHAR_MAX << endl; 
	cout << "Int MAX: " << INT_MAX << endl; 
	cout << "Short MAX: " << SHRT_MAX << endl; 
	cout << "Long MAX: " << LONG_MAX << endl; 
	cout << "Long long MAX: " << LLONG_MAX << endl;
	
	cout << " ================================" << endl; 
	
	cout << "sizeof using variable names" << endl; 
	int age{28}; 
	cout << "age is " << sizeof(age) << " bytes." << endl; 
	cout << "age is " << sizeof age << " bytes." << endl;
	
	return 0;
}