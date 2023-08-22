#include <iostream>
using namespace std;
int main()
{
    int P;
    int R;
    int T;
    cout<< "\n\n_______find the simple interest_______\n"<<endl;
    cout << "write the principle:";
    cin >> P;
    cout << "write the rate:";
    cin >> R;
    cout << "write the time:";
    cin >> T;
    cout << "the simple interest of the problem is : \n"<<endl;
    cout << (P * R * T) / 100 ;
    return 0;
}