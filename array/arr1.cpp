#include <iostream>
using namespace std;
void printarray(int arr[], int size)
{
    for (int i=3; i < size; i++)
    {

        cout << arr[i] << endl;
    }
}
int main()
{
    /*int i;
    int n=10;
        int third[8]={1,2,3,4,5,6};

    for (i=0;i<n;i++) {
     cout << third[i] <<endl;
    }*/
    
  
    int one[10] = {2,3,4 };
    

    printarray(one, 4);

    cout << "done"<< endl;


    int third[100]= {222222,222222,444444444,555555555};

    printarray(third ,2 );

 return 0;
     

}





