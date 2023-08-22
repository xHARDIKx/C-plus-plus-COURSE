#include <iostream>
using namespace std ;
int main()
{

  int a;
  cout << "enter a"<<endl;
  cin>> a;

  int b =2;
  bool divided = false ;
  while (b<a) {
    if (a % b==0 ) {
      cout << "it is not prime" << endl;
      divided = true; 
  }
    
      b= b+1;
  }
    
         if (!divided) {
         cout << "it is  prime"<<endl;
         }


      
      
    
  }
