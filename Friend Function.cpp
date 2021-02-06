#include <iostream>

using namespace std;


class A{
    private:
    int a;
    public:
    A(){
        a=10;
    }
    friend int add(A);//Friend Function
};

int add(A a1){
    a1.a+=6;
    return a1.a;
    
}

int main()
{
    A a;
    cout<<add(a);
   
   
   return 0;
}

\*
A friend function in C++ is a function that is preceded by the keyword “friend”.
When the function is declared as a friend, then it can access the private and protected data members of the class.

There are some points to remember while implementing friend functions in our program:

A friend function can be declared in the private or public section of the class.
It can be called like a normal function without using the object.
A friend function is not in the scope of the class, of which it is a friend.
A friend function is not invoked using the class object as it is not in the scope of the class.
A friend function cannot access the private and protected data members of the class directly.
It needs to make use of a class object and then access the members using the dot operator.
A friend function can be a global function or a member of another class.

*/
