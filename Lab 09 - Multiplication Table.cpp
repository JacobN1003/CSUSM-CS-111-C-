#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{
  

  cout << "     1   2   3   4   5   6   7   8   9   " << endl;
  cout << "     ----------------------------------" << endl;

  for (int x=1 ;(x <= 9);x++)
    {    
      cout << x << " |  ";
    
      for (int i = 1; (i <= 9); i++) 
	{
	  cout << setw(4)<< left << x*i;
		
         }  
      cout << endl;
    }

 return 0;
}
