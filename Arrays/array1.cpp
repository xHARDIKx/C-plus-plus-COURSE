#include <climits>
#include <iostream>
using namespace std;

int main() {
    int a[1000000];
    float sum=0,n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i =0;i<n;i++){
        sum+=a[i];
    }
    cout << sum;
    return 0;
}
