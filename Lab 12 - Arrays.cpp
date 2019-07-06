#include <iostream>
#include <fstream>

using namespace std;

int main ()

{

  double x[1000];
  int y = 0;
  
  for(int i=0; i<1000; i++)
    {   
      x[i]=i*7.5;
    }
       cout << "enter an integer 0-999" << endl;
       cin >> y;
	  if(y < 1000 && y >= 0)
	    {	  
	      cout << "the value in array slot " << y << " is " << x[y] << endl;
	    }
	  else
	    cout << "Value not in range!" << endl;
 return 0;
}
