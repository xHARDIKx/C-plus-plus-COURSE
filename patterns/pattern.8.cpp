#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    while(i<=n){

        int j=1;
        int k=1;
        while(j<=k-i) {

            cout << k+i-1;
            j--;
            k--;
        }
        cout<<endl;
        i++;
    }
}