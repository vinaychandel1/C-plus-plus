#include <iostream>
using namespace std;
const int N=1e5+10;
int a[N];
int pf[N];
int main()
{
	int n;
	cin>>n;
	for (int i = 1; i <=n; ++i)
	{
		cin>>a[i];
		pf[i]=pf[i-1]+a[i];
	}
	int q;
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		cout<<pf[r]-pf[l-1]<<endl;
	}
	return 0;
}
/*
6
3 6 2 8 9 2
4
2 3
4 6
1 5 
3 6
*/
/*
8
19
28
21
*/
//https://www.youtube.com/watch?v=nZe7P674xZo&t=491s
