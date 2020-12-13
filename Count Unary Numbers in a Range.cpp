// CPP program to count unary numbers
// in a range

#include <iostream>
using namespace std;

// Function to check if a number is unary
bool isUnary(int n)
{
	/// Base case. Note that if we repeat
	// above process for 7, we get 1.
	if (n == 1 || n == 7){
	    cout<<"true"<<endl;
		return true;
		
	}
	else if (n / 10 == 0){
	    cout<<"false"<<endl;
		return false;
	}

	/// rec case
	int x, sum = 0;
	while (n != 0) {
		x = n % 10;
		cout<<"x:"<<x<<endl;
		sum = sum + x * x;
		cout<<"sum:"<<sum<<endl;
		n = n / 10;
		cout<<"n:"<<n<<endl;
		cout<<"*****"<<endl;
	}

	isUnary(sum);
}

// Function to count unary numbers
// in a range
int countUnary(int a, int b)
{
	int count = 0;

	for (int i = a; i <= b; i++) {
	    cout<<"i:"<<i<<endl;
		if (isUnary(i) == 1)
			++count;
			
			cout<<"count:"<<count<<endl;
	}

	return count;
}

// Driver Code
int main()
{
	int a = 1, b = 14;

	cout << countUnary(a, b);

	return 0;
}
/*https://www.geeksforgeeks.org/count-unary-numbers-in-a-range/*/
