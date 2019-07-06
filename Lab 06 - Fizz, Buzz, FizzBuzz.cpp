#include <iostream>

using namespace std;

int main ()

{
  int x = 0;

  for(x=1; x<=100; x++)   
    {
        if(x%3 == 0 && x%5 == 0)
	{
	 cout << "fizzbuzz" << endl;
	}    
          
	else if(x%3 == 0)
	  {
	    cout << "fizz" << endl;
	  }
	else if(x%5 == 0)
	  {
	    cout << "buzz" << endl;
	  }
	else
	  cout << x << endl;
    }


return 0;
}
