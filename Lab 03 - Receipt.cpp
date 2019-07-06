#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
  string item1 = "";
  string item2 = "";
  string item3 = "";
  double cost1;
  double cost2;
  double cost3;
  double taxrate;

   cout << "Please provide three items and their prices, what is the first item?" << endl;
   getline(cin, item1);
   cout << "What is the cost of " << item1 << endl;
   cin >> cost1;
   cin.ignore(); 
   cout << fixed << setprecision(2) << "Your first item is: " << item1 << " $" << cost1 << endl;
 
 cout << "Enter your second item." << endl;
  getline(cin, item2);
  cout << "what is the cost of " << item2 << endl;
  cin >> cost2;
  cin.ignore();
  cout << "Your second item is: " << item2 << " $" << cost2 << endl;
  
  cout << "enter your third item." << endl;
  getline(cin, item3);
  cout << "what is the cost of " << item3 << endl;
  cin >> cost3;
  cin.ignore();
  cout << "your third item is: " << item3 << " $" << cost3 << endl;

  cout << "what is the tax?" << endl;
  cin >> taxrate;

  double subtotal = cost1 + cost2 + cost3;
  double tax = subtotal * taxrate;
  double total = tax + subtotal;
    cout << "******************************" << endl;
    cout << endl;    
    cout << left << setw(23) << item1 << right << "$"  << setprecision(2) << setw(6) << cost1 << endl;
    cout << left << setw(23) << item2  << right << "$" << setprecision(2) << setw(6) << cost2 << endl;
    cout << left << setw(23) << item3  << right << "$" << setprecision(2) << setw(6) << cost3 << endl;
    cout << endl;
    cout << left << setw(23) << "subtotal"  << right << "$" << setprecision(2) << setw(6) << subtotal << endl;
    cout << left << setw(23) << "tax"  << right << "$" << setprecision(2) << setw(6) << tax << endl;
    cout << left << setw(23) << "total"  << right << "$" << setprecision(2) << setw(6) << total << endl;
    cout << endl;
    cout << "******************************" << endl;
    cout << "Thank you for shopping with us" << endl;
    cout << "******************************" << endl;

  return 0;
}
