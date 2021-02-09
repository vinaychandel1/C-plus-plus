void leftRotatebyOne(register int arr[],register int n)
{
    int temp = arr[0], i;
    for (register int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];

    arr[n-1] = temp;
}


void rotateArr(register int arr[], register int d, register int n)
{
    for (int i = 0; i < d; i++)
        leftRotatebyOne( arr,  n);
}


/*void reverse(int nums[],int start,int end)
{
    while(start<end){
    swap(nums[start],nums[end]);
            start++;
            end--;
}
}
void rotateArr( int nums[], int d, int n)
{ int k=d%n;
    
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
        reverse(nums,0,n-1);
}        
*/


