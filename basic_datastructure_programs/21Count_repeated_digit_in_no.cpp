#include<bits/stdc++.h>
using namespace std;
void easy_method()
{
    int n=1222331,c[10]={0},i,t,r,count=0;
    t=n;
    while(t>0)
    {
        r=t%10;
        c[r]=c[r]+1;
        t=t/10;
    }
    for(i=0;i<10;i++)
    {
        if(c[i]>1)
            count++;
    }
    cout<<count<<endl;
}

int main()
{
    int n=12221330,t,a[10],i=0,j,d,c[10]={0},count=0;  //c[10]={0}-intialize the value of 10 elements of array to 0.
    t=n;
    //Store each digit in a no. to array
    while(t>0)
    {
        d=t%10;
        a[i++]=d;
        t=t/10;
    }
    for(j=0;j<i;j++)
        cout<<a[j]<<" ";
    cout<<endl;

    //Get the count of digit in no
    for(j=0;j<i;j++)
    {
        n=a[j];
        c[n]=c[n]+1;
    }
    for(j=0;j<10;j++)
        cout<<j<<": "<<c[j]<<endl;
    cout<<endl;

    //Get the count of ditgis repeated more than once
    for(j=0;j<i;j++)
    {
        if(c[j]>1)
            count++;
    }
    cout<<"No. of digits repeated more than once: "<<count;

    //easy_method();
}