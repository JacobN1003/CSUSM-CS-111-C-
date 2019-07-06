#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
  int diceTotal=0;
  int rollOne=0;
  int rollTwo=0;
  int seven=0;
  int twelve=0;
  srand(time(0));
 
for(int i=0;i<1000000;i++)
    {
      rollOne=1+(rand()%6);
      rollTwo=1+(rand()%6);
      diceTotal=rollOne+rollTwo;
      cout << diceTotal << ", ";      
      if(diceTotal==7)
	{
	  seven++;
	}
      if(diceTotal==12)
	{
	  twelve++;
	}
    }
 cout << endl;  
 cout << "The number of times a seven was rolled: " << seven << endl;
 cout  << "The number of times a twelve was rolled: " << twelve << endl;

  return 0;
}

