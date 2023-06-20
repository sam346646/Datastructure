#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;  
}

int main()
{
    cout<<"Prime number"<<endl;
    int num;
    cout<<"Enter the last interval ";
    cin>>num;
    for(int j=2;j<=num;j++)
        if(isprime(j))
            cout<<j<<" ";
}
