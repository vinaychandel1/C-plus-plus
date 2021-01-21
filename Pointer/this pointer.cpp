#include<iostream>
using namespace std;

class Demo{
private:
	int num;
	char ch;
public:
	void setMyValues(int num, char ch){
		this->num=num;
		this->ch=ch;
	}
	void displayMyValues(){
		cout<<num<<endl;
		cout<<ch;
	}
};
int main(int argc, char const *argv[])
{
Demo obj;
obj.setMyValues(100,'A');
obj.displayMyValues();	
	return 0;
}
/*
Here you can see that we have two data members num and ch. In member function setMyValues() we have two local variables having same name as data members name. In such case if you want to assign the local variable value to the data members then you won’t be able to do until unless you use this pointer, because the compiler won’t know that you are referring to object’s data members unless you use this pointer. This is one of the example where you must use this pointer.

*/
