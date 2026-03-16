#include <iostream> 
using namespace std; 
#include <string> 

int main()
{
	std::string str = "enasalihagic"; 

	for(int i = 0; i < str.size() - 1; i++) 
	{
		if(i % 5 == 0)
		{
		str[i-1] = str[i-1] + ' '; 
		}
	}
	cout<< str; 
	
	return 0;
}