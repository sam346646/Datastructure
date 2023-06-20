#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Given a string of size 3 where character at index 1 denotes the subject known to sister I, character at index 2 denotes the subject known to sister II and character at index 3 denotes the subject known to sister III. You have to answer with either YES if chef can master PCM from his sisters or NO if he cannot. ";
    int t;
    cin>>t;
    while(t--)
    {
        int len,i,p=0,c=0,m=0;
        string str;
        cin>>str;
        len=str.size();
        for(i=0;i<len;i++)
        {
            if(str[i]=='P')
                p++;
            else if(str[i]=='C')
                c++;
            else if(str[i]=='M')
                m++;
        }
        if(p==1 && c==1 && m==1)
            cout<<"YES";
        else    
            cout<<"NO";
    }
}