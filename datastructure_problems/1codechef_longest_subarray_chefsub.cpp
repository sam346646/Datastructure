#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Find the largest count of contiguous even subarray in a array";
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,count=0,ans=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                count++;
                ans=max(ans,count);
            }
            else
            {
                count=0;
            }
        }
        cout<<"Largest even subarray count is "<<ans;
    }
}