#include <iostream>

using namespace std;


class A{
    private:
    int c,d;
    public:
    A(int x,int y){
        c=x;
        d=y;
    }
   A(A &y){
       c=y.d;
       d=y.c;
   }
   void display()
{
    cout<<c<<" "<<d;
}};



int main()
{
    A a(10,20);
    A b=a;
    a.display();
    b.display();
   
   
   return 0;
}
