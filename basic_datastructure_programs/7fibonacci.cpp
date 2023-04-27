#include<bits/stdc++.h>
using namespace std;
int n1=0,n2=1,n3;

int fibo(int n)
{
    if(n>0)
    {
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
        return fibo(n-1);  
    }   
}

int main()
{
    cout<<"Fibonacci series"<<endl;
    int num,sum,a=0,b=1,i;
    cout<<"Enter the number of fibonacci series ";
    cin>>num;
    cout<<"0 1 ";
    for(int i=2;i<num;i++)
    {
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }

    cout<<"\nFibonacci series using recursion is "<<endl;
    cout<<"0 1 ";
    fibo(num-2);  

    cout<<"Fibonacci series till specified number is "<<endl;
    cout<<"Enter number ";
    cin>>num;
    cout<<"0 1 ";
    a=0;b=1;
    while(1)
    {
        sum=a+b;
        if(sum>num)
            break;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }     
}
