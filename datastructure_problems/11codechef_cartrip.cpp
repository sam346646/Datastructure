#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int dist,cost;
        cin>>dist;
        if(dist>300)
            cost=dist*10;
        else
            cost=3000;
        cout<<cost;
    }
}