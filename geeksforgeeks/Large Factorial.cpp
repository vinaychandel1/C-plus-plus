// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ll long long

 // } Driver Code Ends
//User function template for C++

// #define ll long long

class Solution{
public:
	vector<ll> factorial(vector<ll> a, int n) {
	    vector<ll>ans;
	    int m=*max_element(a.begin(),a.end());
ll dp[m]={-1};
dp[0]=1;
dp[1]=1;
ll int mod = pow(10, 9) +7;

for(int i=2;i<=m;i++){
dp[i]= i * dp[i-1] % mod;
}

for(int i=0;i<=a.size();i++){
ll v = dp[a[i]];
ans.push_back(v);
}
return ans;
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<ll> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<ll> res = ob.factorial(a, n);
        for (i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends

/*https://practice.geeksforgeeks.org/problems/large-factorial4721/1/#*/
