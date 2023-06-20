#include<bits/stdc++.h>
using namespace std;
int ncr(int n,int r)
{
    if(r==0 || r==n)
        return 1;
    return ncr(n-1,r-1)+ncr(n-1,r);
}
int fact(int n)
{
    if(n==1 ||n==0)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n=2,r=2;
    cout<<"ncr:"<<ncr(n,r)<<endl;
    cout<<n<<" "<<r<<endl;
    cout<<"npr:"<<fact(n)/fact(n-r)<<endl;
    cout<<n<<" "<<r;
}