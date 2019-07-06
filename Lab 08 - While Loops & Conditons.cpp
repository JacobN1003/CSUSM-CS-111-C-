#include <iostream>

using namespace std;

int main ()

{

  int x = 0;
  int odds = 0;
  int evens = 0;  
  char name;
    
do
  {
    cout << "Enter an integer." << endl;
    cin >> x;
        
    if (x % 2 == 0)
      {
	cout << x << " is even, would you like to enter another integer?" << endl;
	evens++;   
      }
    else
      {
	cout << x << " is odd, would you like to enter another integer?" << endl;
	odds++;
      }

    cin >> name;
  }while(( name == 'Y') || (name == 'y'));
  
  cout << "number of odds: " << odds << endl;
  cout << "number of evens: " << evens << endl;
      
   return 0;    
  }
