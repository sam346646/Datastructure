#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Find max and min element in each row of n*m matrix display the largest among them";
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j,mx,mn,dif,large=0;
        cin>>n>>m;
        int a[n][m];
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                cin>>a[i][j]; 

        for(i=0;i<n;i++)
        {
           mx=mn=a[i][0];
           for(j=1;j<m;j++)
           {
                mx=max(a[i][j],mx);
                mn=min(a[i][j],mn);
           }
           large=max((mx-mn),large);
        }   
        cout<<large;
    }
}