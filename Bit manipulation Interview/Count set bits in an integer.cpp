#include <bits/stdc++.h>
using namespace std;
 
/* Function to get no of set bits in binary
representation of positive integer n */
unsigned int countSetBits(unsigned int n)
{
   int  count= __builtin_popcount(n);
    return count;
}
 
/* Program to test function countSetBits */
int main()
{
    int i = 15;
    cout << countSetBits(i);
    return 0;
}
 
