// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
   {
    // Make all odd numbers negative
    for (int i = 0; i < n; i++)
        if (arr[i] & 1) // Check for odd
            arr[i] *= -1;
 
    // Sort all numbers
    sort(arr, arr + n);
 
    // Retaining original array
    for (int i = 0; i < n; i++)
        if (arr[i] & 1)
            arr[i] *= -1;
}
};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends

/*https://practice.geeksforgeeks.org/problems/sort-in-specific-order2422/1#*/
