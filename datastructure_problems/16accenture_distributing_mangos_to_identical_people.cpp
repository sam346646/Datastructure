#include<bits/stdc++.h>
using namespace std;
int ncr(int n,int r)
{
    if(r==0 || r==n)
        return 1;
    return ncr(n-1,r-1)+ncr(n-1,r);
}
int main()
{
    int m,n;
    cout<<"Enter number of mangoes: ";
    cin>>m;
    cout<<"Enter number of people: ";
    cin>>n;
}