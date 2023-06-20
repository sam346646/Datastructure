#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10][10]={{1,2,3},{4,5,6}};
    int m=4,n=5,sum=0;
    int size,less_size,dif;
    if(m<=n)
    {
        size=n;
        less_size=m;
    }
    else
    {
        size=m;
        less_size=n;
    }
    for(int i=0;i<size;i++)
    {
        if(i<less_size)
            sum+=a[i][i];
        else
            sum+=1;
    }  
    cout<<sum;
}