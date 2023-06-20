#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={100,200,300,400,500};
    int k=100;
    int n=sizeof(a)/sizeof(a[0])-1;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    for(int i=0;i<n/2;i++)
    {
        a[i]=a[i]+k;
        a[n-i]=a[n-i]-k;
    }
    for(int i=0;i<n+1;i++)
        cout<<a[i]<<" ";

}