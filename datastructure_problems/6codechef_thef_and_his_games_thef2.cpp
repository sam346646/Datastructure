#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Replace t at begining of two string or reverse either one of two string and replace t at the begining of two string and Compare";
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2,t1,t2;
        bool flag=0;
        cin>>str1>>str2;
        t1=str1;
        t2=str2;
        t1[0]='t';
        t2[0]='t';
        if(t1==t2)
            flag=1;
        else
        {
            t1=str1;
            t2=str2;
            reverse(t1.begin(),t1.end());
            t1[0]='t';
            t2[0]='t';
            if(t1==t2)
                flag=1;
            else
            {
                t1=str1;
                t2=str2;
                reverse(t2.begin(),t2.end());
                t1[0]='t';
                t2[0]='t';
                if(t1==t2)
                    flag=1;
            }
        }
        if(flag==1)
            cout<<"YES";
        else
            cout<<"NO";
    }
}