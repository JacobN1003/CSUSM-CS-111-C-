#include <iostream>
using namespace std;
int main()
{
  int myArray[5]={0,0,0,0,0};
  int* pnumber = myArray;
  
  cout << "enter five integers: " << endl;
  
  for(int a=0;a<5;a++)
    {
      cin >> *(pnumber+a);
    }
  cout << endl;
        for (int b=0;b<5;b++)
	{
	  cout << *(pnumber+b)*3 << endl;
	}
	  
return 0;
}


    

