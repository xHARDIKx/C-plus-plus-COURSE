#include<iostream>
using namespace std;


int main()
{

       int n;
    cout << "enter n" <<endl;
    cin >> n;
    
    int sum = 0;
    int r = 1; 
    
    
    while (r<n) {
        sum = sum + r ;
        r = r+ 1;
        
        cout << n << endl;
    }
}