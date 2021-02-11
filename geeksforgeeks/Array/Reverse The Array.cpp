int reverseArray(int arr[],int n)
{
   int l=0;
   while(l<n-1){
       swap(arr[l],arr[n-1]);
       l++;
       n--;
   }
}
