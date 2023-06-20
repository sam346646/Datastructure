#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Find contiguous mom or dad substring in the string display whichever you get first, else display goo-goo ";
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=0,k=0,l=0;
        cin>>n;
        string s;
        cin>>s;
        string m="mom",d="dad";
        for(i=0;i<n;i++)
        {
            if(s[i]==m[k])
            {
                l=0;
                k++;
                cout<<k<<" ";
                if(k==3)
                    break;
            }
            else if(s[i]==d[l])
            {
                k=0;
                l++;
                if(l==3)
                    break;
            }
            else
            {
                k=l=0;
            }
        }
        if(k==3)
            cout<<"mom";
        else if(l==3)
            cout<<"dad";
        else    
            cout<<"goo-goo";
    }
}