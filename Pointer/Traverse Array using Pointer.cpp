#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	//pointer declaration
	int *p;
	//Arrayw decleration
	int arr[]={1,2,3,4,5,6};
	//Assignment
	p=arr;
	for(int i=0;i<6;i++){

		cout<<*p<<" ";
		p++; //move the pointer to next position
	}

	return 0;
}
