#include<bits/stdc++.h>
using namespace std;

bool fun(string s,int left,int right){
    if(s[left]!='a' && s[right]!='b') return true;
    if(s[left]=='a' && s[right]!='b') return false;
    if(s[left]!='a'&& s[right]=='b') return false;
    if(s[left]=='\0' && s[right]=='\0') return true;
    return fun(s,left-1,right+1);
}


int main(){
    string s;
    char c='X';
    cin>>s;
    size_t found = s.find(c);
    if(found != string::npos){
    int left=found,right=found;
    bool res=fun(s,left-1,right+1);
    if(res==1) cout<<"true";
    else cout<<"false";
    }
    else
    cout<<"false";
}
