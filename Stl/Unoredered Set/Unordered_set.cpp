#include <bits/stdc++.h>

using namespace std;

int main()
{
   unordered_set <int> s;
   s.insert(23);
   s.insert(34);
   s.insert(253);
   s.insert(45);
   s.insert(34);
   s.insert(25653);
   s.insert(45);
   s.insert(3);
   s.insert(243);
   s.insert(243);
   for(auto it=s.begin();it!=s.end();++it)
   cout<<*it<<" ";
   cout<<s.size()<<endl;
   s.erase(45);
   for(auto it=s.begin();it!=s.end();++it)
   cout<<*it<<" ";
   cout<<"\n";

   s.clear();
   cout<<s.size();
   return 0;
}
