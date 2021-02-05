#include <iostream>

using namespace std;

class complex{
private:
    int a,b;
public:
    void setdata(int x, int y){
        a=x;
        b=y;
    }
    void showData(){
    cout<<"a:"<<a<<"b:"<<b;
    }
    
    /*
    complex add(complex c){
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }*/

    complex operator +(complex c){
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.setdata(9,10);
    c2.setdata(1,4);
    //c3=c1.add(c2);
    c3=c1+c2;
    c3.showData();
    return 0;
}
