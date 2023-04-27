#include<bits/stdc++.h>
using namespace std;
bool isprime(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}
int main()
{
    cout<<"Find 2 prime no p1,p2 between n such that p1+p2=n ";
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,k=0,j,flag=0;
        cin>>n;
        int a[n];
        for(i=2;i<n;i++)
            if(isprime(i))
                a[k++]=i;

        for(i=0;i<k;i++)
            cout<<a[i]<<" ";
        for(i=0;i<k;i++)
        {
            for(j=0;j<k;j++)
            {
                if(a[i]+a[j]==n)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==1)
            cout<<endl<<a[i]<<" "<<a[j];
        else
            cout<<"No mathch found";
    }
}