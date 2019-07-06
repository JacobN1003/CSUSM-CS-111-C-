#include <iostream>
using namespace std;
void numFun(double myArray[], double &max, double &min, double &average);
const int array_size=3;
int main()
{
  double myArray[array_size];  
  double max;
  double min;
  double average;

  cout << "Please enter " << array_size << " numbers: " << endl;
  for(int i=0; i<array_size; i++)
    {  
  cin >> myArray[i];
    }
  numFun(myArray, max, min, average);
  cout << "Maximum is " << max << endl;
  cout << "Minumum is " << min << endl;
  cout << "Average is " << average << endl;
    
  return 0;
}

void numFun(double myArray[], double &max, double &min, double &average)
{
  double sum;
  max = myArray[0];
  min = myArray[0];
  for(int i=0; i<array_size; i++)
    {
      if(myArray[i]>max)
	{
	  max=myArray[i];
	}    
      if(myArray[i]<min)
	{
	  min=myArray[i];
	}
      sum+=myArray[i];
    }      
  average=sum/array_size;    
}
