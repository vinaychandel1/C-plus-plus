#include <iostream>

using namespace std;
  
class Myclass{
    private: int x;
    public: 
    void setx(int i){
        x=i;
    }
    int getx(){
        return x;
    }
    
};
int main()
{
  Myclass obs[4];
  for(int i=0;i<4;i++){
      obs[i].setx(i);
  }
  for(int i=0;i<4;i++){
      cout<<obs[i].getx()<<endl;
  }
   return 0;
}


/*Like array of other user-defined data types, an array of type class can also be created.
The array of type class contains the objects of the class as its individual elements.
Thus, an array of a class type is also known as an array of objects.
An array of objects is declared in the same way as an array of any built-in data type.*/
