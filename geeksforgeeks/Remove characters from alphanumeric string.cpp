/*https://practice.geeksforgeeks.org/problems/remove-characters-from-alphanumeric-string0648/1#*/
// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	string removeCharacters(string S) 
	{
	    int n=S.length(); string s;
	for (int i=0; i<=n; i++){
        if (isdigit(S[i])){
            s.push_back(S[i]);
        }
    }
    return s;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		Solution ob;
   		cout << ob.removeCharacters(s) << "\n";
   		
   	}

    return 0;
}  // } Driver Code Ends
