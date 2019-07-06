#include <iostream>
using namespace std;
int main()
{
  double x=0;
  double y=0;
  double* pointerx=&x;
  double* pointery=&y;

  cout << "value x: " << *pointerx << endl;
  cout << "memory location x: " << &pointerx << endl;
  cout << "enter a value for x: " << endl;
  cin >> *pointerx;
  cout << "new value x: " << *pointerx << endl;
  cout << "new memory location x: " << &pointerx << endl << endl;

  *pointery=((*pointerx)*3);

  cout << endl << "value y: " << *pointery << endl;
  cout << "memory location y: " << &pointery << endl;
  cout << "x + y divided by 7: " << ((*pointerx + *pointery)/7) << endl << endl;

  (*pointery)=4;

  cout << "new value y: " << *pointery << endl;
  cout << "new memory location y: " << &pointery << endl;
  cout << "x + y divided by 7: " << ((*pointerx + *pointery)/7) << endl;
  return 0;
}
