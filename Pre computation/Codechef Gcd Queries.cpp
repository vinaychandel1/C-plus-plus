#include <bits/stdc++.h>
using namespace std;
//const int N=1e3+10;
//int a[N];
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n,q;
		cin>>n>>q;
		int a[n+10];
		int forward[n+10];
		int backward[n+10];
		forward[0]=backward[n+1]=0;
		for (int i = 1; i <=n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 1; i<=n; ++i)
		{
			forward[i]=__gcd(forward[i-1],a[i]);
		}
		for (int i = n; i >=1 ; --i)
		{
			backward[i]=__gcd(a[i],backward[i+1]);
		}
		while(q--){
			int l,r;
			cin>>l>>r;
			cout<<__gcd(forward[l-1],backward[r+1])<<endl;
		}

	}
	return 0;
}
	
/*https://www.youtube.com/watch?v=e3qhRh4UOug&t=19s*/
