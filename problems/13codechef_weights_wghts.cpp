
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,x,y,z,a[4];
        cin>>w>>x>>y>>z;
        if(w==x||w==y||w==z||w==x+y||w==x+z||w==y+z||w==x+y+z)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}