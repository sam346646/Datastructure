#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n,i,sumf=0,sums=0,size,total=0;
        cin>>n;
        long int a[n+1],b[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sumf+=a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            sums+=b[i];
        }
        if(sumf!=sums)
            cout<<"-1"<<endl;
        else
        {
                for(i=0;i<n;i++)
                    total+=abs(a[i]-b[i]);
                cout<<total/2<<endl;
        }

    }
}