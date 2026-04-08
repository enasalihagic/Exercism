#include <iostream>
#include <iomanip> 
#include <string> 
using namespace std; 

int main(){
	
	string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"}; 
	string key {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
	string secret_message; 
	string encrypted_message;
	string decrypted_message;
		
	cout << "Enter secret message: "; 
	getline(cin, secret_message); 
	
	for(char c : secret_message)
	{
		size_t position = alphabet.find(c); 
		if(position != string::npos)
		{
			encrypted_message+= key.at(position);
		}
		else
		{
			encrypted_message+= c; 
		}
		
	}
	
	cout << "Encrypted message: " << encrypted_message << endl; 
	
	for(char c : encrypted_message)
	{
		size_t position = key.find(c); 
		if(position != string::npos)
		{
			decrypted_message+= alphabet.at(position);
		}
		else
		{
			decrypted_message+=c; 
		}
	}
	
	cout << "Decrypted message: " << decrypted_message << endl; 
	
	return 0;
}