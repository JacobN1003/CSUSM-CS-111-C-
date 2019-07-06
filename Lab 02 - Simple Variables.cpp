#include <iostream>
using namespace std;
int main () 
{
  string name;
  bool major;
  char punct;
  int num1;
  int num2;

  cout << " Please enter your first name." << endl;
  cin >> name;
  cout << "Hello " << name << endl;
  cout << "Are you majoring in computer science?" << endl;
  cin >> major;
  cout << "Computer science major: " << major << endl;
  cout << "What is your favorite punctuation mark?" << endl;
 cin >> punct;
 cout << "Your favorite punctuation is: " << punct << endl;
 cout << "Please pick two numbers to be divided. Please pick your first number." << endl;
 cin >> num1;
 cout << "Your first number is " << num1 << endl;
 cout << "Please pick your second number" << endl;
 cin >> num2;
 cout << "Your second number is " << num2 << endl;
 cout << num1 << "/" << num2 << "=" << (double) num1/num2 << endl;
 cout << num1 << "/" << num2 << "=" << num1/num2 << " remainder " << num1%num2 << endl;

 return 0;
}
