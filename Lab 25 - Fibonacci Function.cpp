#include <iostream>
using namespace std;
int fibfunc(int num);
int main()
{
  int x=0;
  cout << "this program will return the nth Fibonacci sequence number." << endl;
do
  {
    cout << "enter a positive number for the Fibonacci Function: " << endl;
    cin >> x;
   
  }while(x<0);
 int y = fibfunc(x);
 cout << y << endl;
  return 0;
}
int fibfunc(int x)
{
  if(x==1||x==2)
    {
      return 1;
    }
else
    {
      return fibfunc(x-2)+fibfunc(x-1);
    } 
}

