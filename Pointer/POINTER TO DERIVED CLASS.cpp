#include<iostream>
using namespace std;

class BC
{
public:
	int b;
	void show(){
		cout<<"b:"<<b;
	}
	
};

class DC:public BC{
public:
	int d;
	void show(){
		cout<<"b:"<<b<<"\nd"<<d;
	}
	
};
int main(int argc, char const *argv[])
{
	BC *bptr, base;
	bptr=&base;
	bptr->b=100;
	bptr->show();
      DC derived;
      bptr=&derived;
      bptr->b=200;
      //bptr->d=300 ERROR
      cout<<"\nb->ptr now points to base object\n";
      bptr->show();
      DC *dptr;
      dptr=&derived;
      dptr->d=300;
      cout<<"\ndptr is derived type pointer\n";
      dptr->show();
      cout<<"\nusing((DC *)bptr)\n";
      ((DC *)bptr)->d=400;
      ((DC*)bptr)->show();


	return 0;
}
