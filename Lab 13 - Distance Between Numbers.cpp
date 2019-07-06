#include <iostream>

using namespace std;

double dist(double n1, double n2);

int main()

{
  double num1;
  double num2;

    cout << "input a number" << endl; 
    cin >> num1;
    
    cout << "input another number" << endl;
    cin >> num2;
    
    cout << "the distance between " << num1 << " and " << num2 << " is " << dist(num1, num2) << endl;

  return 0;
}

double dist(double n1, double n2)
{
   
  
if(n1<n2)
    {
      return (n1-n2)*(-1);
    }
  else
    {
      return n1-n2;     
    }

}
