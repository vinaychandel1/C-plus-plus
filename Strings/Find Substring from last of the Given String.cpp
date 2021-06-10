// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:		

	int search(string X, string Y)
	{
	    int x=X.size();
	    int y=Y.size();
	    int t=-1;
	    for(int i=0;i<x;i++){
	        if(X.substr(i,y)==Y)
	       t=i+1;
	    }
	    return t;
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
   		string x, y;
   		cin >> x >> y;
        Solution ob;

   		cout << ob.search(x, y) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
/*https://practice.geeksforgeeks.org/problems/find-substring-from-last-of-the-given-string3440/1#*/
