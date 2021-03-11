#include <iostream>
using namespace std;
const int N=1e7+10;
long long int arr[N];
int main()
{
    int n,m;
    long long int max=-1;
    cin>>n>>m;
    while(m--){
        int a,b,d;
        cin>>a>>b>>d;
        arr[a]+=d;
        arr[b+1]-=d;
    }
for (int i = 1; i <=n; ++i)
        {    arr[i]+=arr[i-1];
            if(max<arr[i])
                max=arr[i];
        }
cout<<max;
return 0;
}
