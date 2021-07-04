#include<bits/stdc++.h>
using namespace std;

void print(map<int,int> &mp)
{
   cout<<"map size:"<<mp.size()<<endl;
   cout<<"Elemnts in map:"<<endl;
  for (auto &it:mp) {
        cout<<it.first<<" "<<it.second<<endl; //access complexity fo all is O(nlog(n))
    }  
}
int main(){
    map<int, int> mp; // map stores values in sorted order it used RED Black tree data structure
    mp.insert(make_pair(1,40));// insetion takes O(log(n))
    mp.insert({4,90});
    mp[5]=10;
    mp[2];//it will give value 0, if there wasin map<int,string> string then it will pass empty string
    map<int, int>::iterator itr;
    for (itr=mp.begin();itr!=mp.end();itr++)
    {
       cout<<itr->first<<" "<<itr->second<<endl; 
    }
    print(mp);//function call
    auto it=mp.find(4);
    if(it==mp.end()){
        cout<<"NOT FOUND";
    }
    else
    cout<<"\nElement found at position: "<<(*it).first<<" "<<(*it).second;
auto it1=mp.find(3);
if (it1!=mp.end())//safety check if find(3) not found then it gives segmentation fault
{
 mp.erase(3);//log(n);
cout<<"\nAfter erasing 3:"<<endl;
print(mp);
}
    //short code for iterate
    /*for (auto &it:mp) {
        cout<<it.first<<" "<<it.second<<endl;
    }*/

}
/*Output:
1 40
2 0
4 90
5 10
map size:4
Elemnts in map:
1 40
2 0
4 90
5 10

Element found at position: 4 90
*/
