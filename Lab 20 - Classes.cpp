#include <iostream>
using namespace std;
double const pi = 3.14159;

class circle
{
    private:
        double radius;
    public:
        double calcArea()
        {return pi*(radius*radius);};

        circle()
            {radius = 0;};

        circle(double aRadius)
            {setRadius(aRadius);};

        void setRadius(double aRadius)
        {
            if(aRadius > 0)
                radius = aRadius;
            else
                radius = 0;
        }

        double getRadius(double aRadius)
        {return radius;}
};

int main()
{
  circle myCircle;
  double a;
  double b;

  cout << "Enter a radius for circle 1: " << endl;
  cin >> a;
  myCircle.setRadius(a);
  cout << "Circle 1's radius: " << myCircle.getRadius(a) << endl;

  //cout << "Enter a radius for circle 2: " << endl;
  //cin >> myCircle.setRadius(b);



  return 0;
}

