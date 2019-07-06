#include <iostream>
using namespace std;
int main ()
{
  int x = 0;
  int y = 0;

  cout << "Enter two inegers: " << endl;
  cin >> x;
  cin >> y;

  cout << x << " + " << y << " = " << x+y << endl;
  cout << x << " - " << y << " = " << x-y << endl;
  cout << x << " * " << y << " = " << x*y << endl;
  return 0;
}
