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


/**/


