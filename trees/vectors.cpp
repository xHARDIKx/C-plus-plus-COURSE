#include <iostream>
#include <vector>
using namespace std;

int main()
{                           // push back for update
    vector<int> v;
    v.push_back(20);
    v.push_back(60);
    v.push_back(50);
    v.push_back(40);
v.pop_back();
cout<< "            "<<endl;
cout<<" "<<endl;
    for(int i=0 ; i<v.size();i++)
    {
        cout << v[i]<< endl;
    }
//      we can use loop or v.at method
    cout<< v.at(0)<<endl;
    cout<< v.at(1)<<endl;
    cout<< v.at(2)<<endl; 
    cout<< v.at(3)<<endl; 
    


// delete last elements


}