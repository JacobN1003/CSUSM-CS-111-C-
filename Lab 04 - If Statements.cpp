#include <iostream>

using namespace std;

int main ()

{
  int Num;
  cout << "Please provide an integer." << endl;
  cin >> Num;


  if(Num % 2 == 0) 
    {
      cout << "Your number is even." << endl;

      if((Num%3 == 0) && (Num%5 == 0)) 
	{
	  cout << Num << " is even and divisble by three and five" << endl;
	}
      else 
	{
	  cout << Num << " is even but not divisable by three and five" << endl;
	}
    }  



  else  
	{
	  cout << "Your number is odd." << endl;
	  if(Num < 0) 
	    {
	    cout << Num << " is negative" << endl;  
	    }
	  else 
	    {
	      cout << Num << " is positive" << endl;
	    }
	} 



    if(Num <= 100 && Num >= -100) 
    { 
      cout << "Your number is between -100 and 100." << endl;
    }
    else 
    {
      cout << "Your number is not between -100 and 100." << endl;
    }
 return 0;
}
