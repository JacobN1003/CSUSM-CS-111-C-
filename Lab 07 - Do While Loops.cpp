#include <iostream>

using namespace std;

int main ()

{
  int x = 0;
  int evens = 0;
  int odds = 0;


  while(x>-1)
    {
  cout << "Enter a positive integer or -1 to quit:" << endl;
  cin >> x; 
      
    if (x % 2 == 0)
      {
	cout << x << " is even." << endl;
	evens++; 
      }
    else if(x != -1)   
      {
	cout << x << " is odd." << endl;
	odds++;
      }
    }
       if (evens == 0 && odds == 0)
        {
         cout << "No numbers were entered." << endl;
        }
       else
        { 
         cout << "Even numbers: " << evens << endl;
         cout << "Odd numbers: " << odds << endl;
        }

  return 0;
}

