#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={3,1,4,8};
    int m,i,mxf,mnf,mxs,mns,dff=0,dfs=1;
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    m=n/2;
    while(dff!=dfs)
    {
        mxf=max(a[0],a[m-1]);
        mnf=min(a[0],a[m-1]);
        mxs=max(a[m],a[n-1]);
        mns=min(a[m],a[n-1]);
        dff=mxf-mnf;
        dfs=mxs-mns;
        if(dff<dfs)
            a[m-1]+=1;
        else
            a[n-1]+=1;
    }
    cout<<dff<<" "<<dfs;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}