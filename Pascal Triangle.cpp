#include <bits/stdc++.h>
using namespace std;

void printPascal(int numRows)
{
	
	int nums[numRows][numRows]={0};
	nums[0][0]=1;
	cout<<1<<endl;
	
	for (int i=1;i<=numRows;i++)
{
 
nums[i][0]=nums[i][i]=1;
cout<<nums[i][0];
for (int j=1;j<i;j++)
{
nums[i][j]=nums[i-1][j-1]+nums[i-1][j];
cout<<nums[i][j];
}
cout<<nums[i][i];
cout<<endl;
}
}

// Driver code
int main()
{
	int n = 5;
	printPascal(n);
	return 0;
}
