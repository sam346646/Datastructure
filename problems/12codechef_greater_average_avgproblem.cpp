
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        float avg;
        cin>>a>>b>>c;
        avg=(a+b)/2.0;
        if(avg>c)
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl;
    }
}