#include <bits/stdc++.h>
using namespace std;

vector <int> countDistinct(int[], int, int);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        vector <int> result = countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}// } Driver Code Ends



vector <int> countDistinct (int A[], int n, int k)
{
   unordered_map<int,int> m;
   vector<int> v;
   for(int i=0;i<k;i++){
       if(m.find(A[i])==m.end())
       m.insert({A[i],1});
       else
       m[A[i]]++;
   }
   int l=0, r=k-1;
   v.push_back(m.size());
   while(l<n && r<n-1){
       m[A[l]]--;
       if(m[A[l]]==0)
       m.erase(A[l]);
       l++; r++;
       if(m.find(A[r])==m.end())
       m.insert({A[r],1});
       else
       m[A[r]]++;
       v.push_back(m.size());
       
   }
return v;
    
}
