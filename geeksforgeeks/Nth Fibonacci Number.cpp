/*https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1#*/
// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution
{
    public:
    long long int nthFibonacci(long long int n)
    { if(n <=1)
            return n;
        long long int a = 0;
        long long int b = 1;
        long long int c;
        
        for(long long int i = 2; i <= n; i++)
        {
            c = (a + b) % 1000000007;
            a = b;
            b = c;
        }
        return c;
    }
};
// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
