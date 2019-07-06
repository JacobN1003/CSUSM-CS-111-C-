#include <iostream>
using namespace std;
const int ARR_SIZE = 10;
void bSort(double ar[]);
int main()
{
  double nums[ARR_SIZE];
  for(int i =0; i < ARR_SIZE; i++)
    {
      cout << "Enter value " << i+1 << " of " << ARR_SIZE << " to be sorted: ";
      cin >> nums[i];
      cout << endl;
    }
  cout << endl << endl << "Sorting values." << endl << endl;
  bSort(nums);
  cout << "Sorted values are: ";
  for(int i = 0; i < ARR_SIZE; i++)
    {
      cout << endl << nums[i];
    }
  cout << endl << endl;
  return 0;
}
void bSort(double ar[])
{
  double temp = 0;
  bool flag;
 do
    {
      flag=false;
      for(int i = 0; i < ARR_SIZE - 1; i++)
        {
        if(ar[i] > ar[i+1])
            {
            temp = ar[i];
            ar[i] = ar[i+1];
            ar[i+1] = temp;
            flag = true;
            }
        }
    }while(flag == true);
}
