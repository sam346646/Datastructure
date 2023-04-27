#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Harshad number: n % (sum of digits of n) == 0 ";
    int t;
    cin>>t;
    while(t--)
    {
        int n,rem,sum=0,temp;
        cin>>n;
        temp=n;
        while(temp>0)
        {
            rem=temp%10;
            sum+=rem;
            temp/=10;
        }
        cout<<sum<<endl;
        if((n%sum)==0)
            cout<<"Harshad number";
        else
            cout<<"Not a harshad number";
    }
}