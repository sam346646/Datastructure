#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[10],x;
    ar[0]=8;
    x=ar[0]++;
    cout<<x<<" "<<ar[0]<<endl;
    ar[0]=8;
    x=++ar[0];
    cout<<x<<" "<<ar[0]<<endl;

    int a[8]={9,4,1,3,6,1},i=0;
    cout<<a[i++]<<" "<<i<<endl;
    i=0;
    cout<<a[++i]<<" "<<i<<endl;

    cout<<a[0]++<<" "<<a[0]<<endl;
    x=a[0]++;  //IMP:x-1 times, a[0]-2 times
    cout<<x<<" "<<a[0]<<endl;
    x=++a[0];  //IMP:x-1 times,a[0]-1 times
    cout<<x<<" "<<a[0]<<endl;
    // a[1]++<<a[x++];
}