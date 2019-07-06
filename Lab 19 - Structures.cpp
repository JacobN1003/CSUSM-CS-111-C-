#include <iostream>
using namespace std;
struct student
{
  int studentID;
  double gpa;
  string fullName;
  int units;
};
int main()
{
  student s1, s2;

  cout << "Enter student ID number: " << endl;
  cin >> s1.studentID;
  while(s1.studentID>10000||s1.studentID<1000)
    {
      cout << "Enter a valid four digit student ID number" << endl;
      cin >> s1.studentID;
    }
  cout << "Enter student GPA: " << endl;
  cin >> s1.gpa;
  while(s1.gpa>4||s1.gpa<0)
    {
      cout << "Enter a valid GPA" << endl;
      cin >> s1.gpa;
    }
  cout << "Enter student name: " << endl;
  cin.ignore();
  getline(cin, s1.fullName);
  cout << "Enter student  units: " << endl;
  cin >> s1.units;
  while(s1.units<0)
    {
      cout << "Enter a valid amount of units: " << endl;
      cin >> s1.units;
    }
  cout << endl << "Student One" << endl;
  cout << "ID Number: " << s1.studentID << endl;
  cout << "GPA: " << s1.gpa << endl;
  cout << "Name: " << s1.fullName << endl;
  cout << "Units: " << s1.units << endl << endl;

  cout << "Enter student ID number: " << endl;
  cin >> s2.studentID;
  while(s2.studentID>10000||s2.studentID<0)
    {
      cout << "Enter a valid four digit student ID number" << endl;
      cin >> s2.studentID;
    }
  cout << "Enter student GPA: " << endl;
  cin >> s2.gpa;
  while(s2.gpa>4||s2.gpa<0)
    {
      cout << "Enter a valid GPA" << endl;
      cin >> s2.gpa;
    }
  cout << "Enter student name: " << endl;
  cin.ignore();
  getline(cin, s2.fullName);
  cout << "Enter student  units: " << endl;
  cin >> s2.units;
  while(s2.units<0)
    {
      cout << "Enter a valid amount of units: " << endl;
      cin >> s2.units;
    }
  cout << endl << "Student Two" << endl;
  cout << "ID Number: " << s2.studentID << endl;
  cout << "GPA: " << s2.gpa << endl;
  cout << "Name: " << s2.fullName << endl;
  cout << "Units: " << s2.units << endl;

return 0;
}

