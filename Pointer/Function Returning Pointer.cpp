#include<iostream>
using namespace std;

int *reference(int x){
    cout<<"\nValue of x:"<<x;
    cout<<"\nAddress of x:"<<&x;
	int *p;
	p=&x;
	return p;
}

int main(int argc, char const *argv[])
{
	int x,*ptr;
	cout<<"\nAddress of x in main() is:"<<&x;
	ptr=reference(x);
	cout<<"\nAddress of x in reference is:"<<ptr;
	return 0;
}
