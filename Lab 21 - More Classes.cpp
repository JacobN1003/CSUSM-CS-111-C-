#include <iostream>
using namespace std;

double const pi = 3.14159;

class circle
{
private:
  double radius;
public:
  void setRadius(double passedRadius);
  double getRadius();
  double calcArea();
  circle();
  circle(double passedRadius);
};

circle::circle()
{
  radius =0;
}

circle::circle(double passedRadius)
{
  setRadius(passedRadius);
}

void circle::setRadius(double passedRadius)
{
  if(passedRadius > 0)
    {
      radius = passedRadius;
    }
  else
    {
      radius = 0;
    }
}
double circle::getRadius()
{
  return radius;
}


double circle::calcArea()
{
  return pi*(radius*radius);
}


int main()
{
  //circle myCircle;
  double c1;
  double c2;

  cout << "Enter a radius for circle 1: " << endl;
  cin >> c1;

  cout << "Enter a radius for circle 2: " << endl;
  cin >> c2;


  circle myCircle(c1);
  cout << "Circle 1 radius: " << myCircle.getRadius() << endl;
  cout << "Circle 1 Area: " << myCircle.calcArea() << endl;
  circle myCircle2(c2);
  cout << "Circle 2 radius: " << myCircle2.getRadius() << endl;
  cout << "Circle 2 Area: " << myCircle2.calcArea() << endl;

  return 0;
}

