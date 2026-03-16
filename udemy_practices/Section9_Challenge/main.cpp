#include <iostream>
#include <vector> 
using namespace std;

int main() 
{
  char choice {};
  int input {};
  vector <int> list {}; 
  
  do 
  {
    cout << "P - Print numbers" << endl; 
    cout << "A - Add a number" << endl; 
    cout << "M - Display mean of the number" << endl; 
    cout << "S - Display the smallest number" << endl; 
    cout << "L - Display the largest number" << endl; 
    cout << "Q - Quit" << endl; 
    
    cout << "Enter your choice: "; 
    cin >> choice;
    
    switch(choice)
    {
      case 'P':
      case 'p':
        if(!list.empty())
        {
          cout << "[ "; 
          for(int n : list)
          {
            cout << n << " "; 
          }
          
          cout << "]" << endl; 
        }
        else
        {
          cout << "[] - the list is empty" << endl; 
        }
      break;
      
      case 'A':
      case 'a':
        cout << "Add integer to the list: ";
        if(cin >> input)
        {
          cout << input << " added." << endl; 
          list.push_back(input);
        }
        break; 
      
      case 'M':
      case 'm': 
        if(!list.empty())
        {
          double sum {}; 
    
          for(int n : list)
          {
            sum += n; 
          }
          cout << "Average of elements: " << sum / list.size() << endl; 
        }
        else
        {
          cout << "Unable to calculate the mean - no data" << endl; 
        }
        break;
      
      case 'S':
      case 's':
        if(!list.empty())
        {
          int min = list.at(0); 
          
          for(int n : list)
          {
            if(min > n)
            {
              min = n; 
            }
          }
          
          cout << "Min element of the list is: " << min << endl; 
        }
        else
        {
          cout << "Unable to determine the smallest number - list is empty" << endl; 
        }
        break;
    
      case 'L':
      case 'l':
        if(!list.empty())
        {
            int max = list.at(0); 
            for(int n : list)
            {
                if(max < n) max = n; 
            }
            cout << "Max element of the list is: " << max << endl; 
        }
        else
        {
            cout << "Unable to determine the highest number - list is empty" << endl;
        }
        break;
      
      default: 
        cout << "Unknown selection, please try again." << endl; 
        break;
    }    
  }while(choice != 'Q' && choice != 'q'); 
  
    return 0;
}