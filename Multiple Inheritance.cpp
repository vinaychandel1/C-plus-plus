#include <iostream>

using namespace std;

class Shape{
public:
    void setWidth(int w){
    width=w;
    }
    void setHeight(int h){
    height=h;
    }
protected:
    int width;
    int height;

};

class PaintCost{
public:
    int getCost(int area){
    return area*70;
    }
};

class Rectangle:public Shape, public PaintCost{
public:
    int getArea(){
    return(width*height);
    }

};
int main()
{
    Rectangle Rect;
    int area;

    Rect.setWidth(55);
    Rect.setHeight(77);
    area=Rect.getArea();
     // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

   // Print the total cost of painting
   cout << "Total paint cost: $" << Rect.getCost(area) << endl;
    return 0;
}
