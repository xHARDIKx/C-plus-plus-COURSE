#include<iostream>
using namespace std;

int main()
{
    int basic_salary;
    char grade;
    float hra, da, allow, pf, totalSalary;
    
    
    cin >> basic_salary;
    
    
    cin >> grade;
    
    hra = 0.2 * basic_salary;
    da = 0.5 * basic_salary;

    if (grade == 'A') {
        allow = 1700;
        pf = 0.1 * basic_salary;
    }
    else if (grade == 'B') {
        allow = 1500;
        pf = 0.08 * basic_salary;
    }
    else {
        allow = 1300;
        pf = 0.05 * basic_salary;
    }

    totalSalary = basic_salary + hra + da + allow - pf;
    
    cout << totalSalary << endl;
    
    return 0;
}
