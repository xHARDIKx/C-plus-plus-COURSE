#include <iostream>
using namespace std;

class sample
{
    private:
     int x;
     int y;

   public:
    void getdata(int a , int b);
    void display();
    void operatoe-();

};
void sample::getdata(int a, int b)
{
    x= a;
     y= b;
}
{
    void sample ::display()
}
{
   cout << x<< endl;
   cout << y<<endl ;
} 
{
    void sample ::operator-()

}
{
    x=-x;
    y=-y;
}
int main ()
{
 sample s;
 s.getdata( 8,-99)
 cout << "operator before"<<endl;
 s.display();
 cout << "after operator"<<endl;
 -s;
 s.display();
 }