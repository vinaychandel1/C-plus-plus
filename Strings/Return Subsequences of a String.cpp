#include <iostream>

using namespace std;
int subs(string input,string output[]){
	if (input.empty())
	{
		output[0]="";
		return 1;
	}
	string smallstring=input.substr(1);
	int smallinput=subs(smallstring,output);
	for (int i = 0; i < smallinput; ++i)
	{
		output[i+smallinput]=input[0]+output[i];
	}
	return smallinput*2;
}

int main()
{ string s="abc";
string *output=new string[1000]; 
int count=subs(s,output);
for(int i=0;i<count;i++){
    cout<<output[i]<<endl;
}
return 0;
}
