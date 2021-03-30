#include <iostream>
using namespace std;

class Animal{
public:
	void animalSound(){
		cout<<"The animal makes a sound\n";
	}
};
class Pig:public Animal
{
public:
	void animalSound(){
        cout<<"The Pig says:wee wee\n";
	}
};
class Dog:public Animal
{
public:
	void animalSound(){
        cout<<"The dog says:bow bow\n";
	}
};
int main(){
	Animal myAnimal;
	Pig myPig;
	Dog myDog;
	myAnimal.animalSound();
	myPig.animalSound();
	myDog.animalSound();
}
