#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	//pointer declaration
	int *p, var=100;
	p=&var; ///Assignment

	cout<<"Address of var:"<<&var<<endl;
	cout<<"Address of var:"<<p<<endl;
	cout<<"Address of p:"<<&p<<endl;
	cout<<"value of var:"<<*p<<endl;

	return 0;
}
