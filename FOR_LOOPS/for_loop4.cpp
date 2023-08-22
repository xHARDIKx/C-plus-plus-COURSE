#include<iostream>
using namespace std;

int main() {
	int n,c;
    
    int sum =0  ,prod =1 ;
   cin>> n >>c;  
   
   if (c==1) 
   {
      int i =1;
      while(i<=n){
         sum =sum+ i;
         i++;
      }
      cout <<sum <<endl;
   }
   else if (c==2){
int i=1;
      while(i<=n){
         prod=prod*i;
         i++;
      }
      cout << prod<<endl;
   }
   else if (c!=1 && c!=2){
      cout << -1<<endl;
   }
   return 0; 
}

