#include <iostream>
using namespace std;

class point{
private:
    int x,y;
public:
    point(int x1,int y1){
    x=x1;
    y=y1;
    }

    //copy constructor
    point(const point &p2)
    {
        x=p2.x;
        y=p2.y;
        cout<<"x:"<<p2.x<<"\n"<<"y:"<<p2.y<<endl;
    }
    int getX()            {  return x; }
    int getY()            {  return y; }

};



int main(){
point p1(10,15);
point p2=p1;
cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
    cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();
return 0;
}
