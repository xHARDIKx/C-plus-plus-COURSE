#include <iostream>
#include <cmath>
using namespace std;
class Student
{
string name;
string branch;
int roll;
int age;
char sex;
int marks[5];
float perc;
public:
// Read student data
void read()
{
cout << "\nEnter name: ";
cin >> name;
cout << "Enter branch: ";
cin >> branch;
cout << "Enter roll no.: ";
cin >> roll;
cout << "Enter age: ";
cin >> age;
cout << "Enter sex: ";
cin >> sex;
cout << "Enter marks in 5 subjects: ";
for (int i = 0; i < 5; i++)
cin >> marks[i];
}
// Calculate percentage
void calculate()
{
float total = 0;
for (int i = 0; i < 5; i++)
total += marks[i];
perc = total / 5;
}
// Print student info with percentage > 70%
void print()
{
if (perc > 70.0)
{
cout << "\nName: " << name << "\n";
cout << "Percentage: " << perc <<
"\n";
}
}
} ;
int main()
{
// Input student data size
int N;
cout << "Enter number of students: ";
cin >> N;
// Create Student array
Student S[N];
// Read Student data and calculate percentage
for (int i = 0; i < N; i++)
{
S[i].read();
S[i].calculate();
}
// Output student with percentage > 70%
for (int i = 0; i < N; i++)
{
S[i].print();
}
return 0;
}