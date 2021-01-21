#include<iostream>
using namespace std;

class comp
{
	int real,imag;
public:
	void input(int a, int b){
		real=a;
		imag=b;
	}
	void display(void){
     cout<<real<<"+i"<<imag;
	}
	
};

int main(int argc, char const *argv[])
{
	comp *cptr,c;
	cptr=&c;
	cptr->input(5,3);
	cptr->display();
	return 0;
}
