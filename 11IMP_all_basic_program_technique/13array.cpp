#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,1,3,4,1,2};
    cout<<"Size of array is "<<sizeof(arr)/sizeof(arr[0])<<endl;
    int arr1[10]={1,2,3,4};
    cout<<"Size of array is "<<sizeof(arr1)/sizeof(arr1[0])<<endl;
    int arr2[10],n;
    cout<<"Enter no. of elemnts ";
    cin>>n;
    cout<<"Enter "<<n<<" elements into the array ";
    for(int i=0;i<n;i++)
        cin>>arr2[i];


    cout<<"Working with array "<<endl;

    cout<<"1.Size of array is "<<endl;
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    
    cout<<"2.Sorted array is"<<endl;
    sort(arr,arr+size);
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    
    cout<<"3.Reverse of array is"<<endl;
    reverse(arr,arr+size);
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";

    cout<<"4.Finding maximum and minimum element between the range"<<endl;
    int mx=max(arr[0],arr[3]);
    mx=*max_element(arr,arr+size);
    int mn=min(arr[0],arr[3]);
    cout<<"Maximum:"<<mx<<" "<<"Minimum:"<<mn<<endl;

    cout<<"\nCreating unknown size of array column for different row."<<endl;
    int row,qry,i,j,k,col,q1,q2;
    cin>>row>>qry;
    int *a[row];
    
    for(i=0;i<row;i++)
    {
        cin>>col;
        a[i]=new int[col];
        for(j=0;j<col;j++)
            cin>>a[i][j];
    }
    
    for(k=0;k<qry;k++)
    {
        cin>>q1>>q2;
        cout<<a[q1][q2]<<endl;
    }
}