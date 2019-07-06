
#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{
  int size; 
  do
    {
      cout << "Enter multiplication table size between 1-25: " << endl;
      cin >> size;
      
    }while(size<1||size>25);
  size++;
  int myArray[size][size];  
  cout << "      ";
  for (int x=0; x<size; x++)
    {
      cout << setw(4) << x;  
    }
  cout << endl;
  cout << "-------";
  for (int x=0; x<size; x++)
    {
      cout << "----";
    }
  cout << endl;
  for (int x=0; x<size; x++)
    {         
      for (int y=0; y<size; y++)
        {	  	 
	  myArray[x][y]=x*y;
        }
    }
  for (int x=0; x<size; x++)
    {
      cout << setw(2) << x << " |  ";
      for (int y=0; y<size; y++)
        {
          cout << setw(4) << myArray[x][y];
        }
      cout << endl;
    }
  return 0;
}


