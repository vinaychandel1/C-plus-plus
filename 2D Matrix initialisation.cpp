#include<iostream>
using namespace std; 
main( ) 
{  
    int arr[4][2] = {
        { 10, 11 },
        { 20, 21 },
        { 30, 31 },
        { 40, 41 }
        } ;
         
    int i,j;
     
    cout<<"Printing a 2D Array:\n";
    //int rows = sizeof(arr)/sizeof(arr[0]);
    //int cols = sizeof(arr[0])/sizeof(arr[0][0]);
    int rows =  sizeof(arr)/sizeof(arr[0]);
int cols = sizeof(arr)/(sizeof(int)*rows);
    //cout<<sizeof(arr)<<endl;
    //cout<<sizeof(arr[0])<<endl;
    //cout<<sizeof(arr[0][0])<<endl;
    //cout<<sizeof(i)<<endl;;
    //cout<<sizeof(rows)<<endl;
    //cout<<sizeof(cols)<<endl;
    //cout<<sizeof(int)*rows<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;
    }
}
