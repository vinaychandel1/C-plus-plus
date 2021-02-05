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

    complex operator-(){
        complex temp;
        temp.a=-a;
        temp.b=-b;
        return temp;
    }
};

int main()
{
    complex c1,c2;
    c1.setdata(9,10);
    c2=-c1;
    c2.showData();
    return 0;
}
