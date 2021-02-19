// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
    int *checkDoorStatus(int N) {
        int a = (int *)malloc(sizeof(int) * N);
int i,perfectsquare,k = 0;
for(i = 1; i <= N; i++)
{
perfectsquare = (int)sqrt(i);
if(perfectsquare == k)
{
a[i-1] = 0;
}
else if(perfectsquare > k)
{
a[i-1] = 1;
k = perfectsquare;
}
}
return a;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        int* ptr = ob.checkDoorStatus(N);
        for(int i=0 ; i<N ; i++)
            cout<<ptr[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
