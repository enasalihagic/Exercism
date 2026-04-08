#include <iostream>
using namespace std; 

int main()
{
	cout << "Enter the width of the room: "; 
	int room_width{0};
	cin >> room_width;
	
	cout << "Enter the lengt of the room: "; 
	int room_lengt{0}; 
	cin >> room_lengt;
	
	cout << "The area of the room is: " << room_width * room_lengt << " square feet." << endl;

	return 0;
}