int immediateSmaller(int arr[], int n, int x)
{
   int smaller = -1;

for(int i = 0; i < n; i++)
if(arr[i] < x && arr[i] > smaller)
smaller = arr[i];

return smaller;
    
}
