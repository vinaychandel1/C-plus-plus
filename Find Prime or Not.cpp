#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int num,count=0;
    cin>>num;
    if(num==2){
        cout<<"Prime";
    }
    else{
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
                count=1;
        break;
        }
    }
    if(count==0){
        cout<<"Number is prime";
    }
    else{
        cout<<"Number is not prime";
    }
    }
    return 0;
}
