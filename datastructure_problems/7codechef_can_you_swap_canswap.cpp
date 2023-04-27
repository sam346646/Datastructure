#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Replace t at begining of two string or reverse either one of two string and replace t at the begining of two string and Compare ";
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        bool flag=0;
        int i,n,count=0;
        cin>>str;
        string s=str;
        n=s.length();
        sort(s.begin(),s.end());
        for(i=0;i<n;i++)
        {
            if(str[i]!=s[i])
                count++;
        }
        if(count<=2)
            cout<<"YES";
        else
            cout<<"NO";
    }
}