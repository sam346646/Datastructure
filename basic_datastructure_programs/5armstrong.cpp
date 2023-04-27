#include<bits/stdc++.h>
using namespace std;

int no_of_digits(int n)
{
    int no=0;
    while(n!=0)
    {
        n=n/10;
        no++;
    }
    return no;
}

int main()
{
    cout<<"Armstrong"<<endl;
    int num,n,rem,sum=0,ndg=0;
    double p=0;
    cout<<"Enter the number ";
    cin>>num;
    ndg=no_of_digits(num);
    cout<<"Number of digits "<<ndg<<endl;
    n=num;
    while(n>0)
    {
        rem=n%10;
        p=pow(rem,ndg);
        sum=sum+p;
        n=n/10;
    }
    cout<<"Sum is "<<sum<<endl;
    if(sum==num)
        cout<<"Number is armstrong"<<endl;
    else    
        cout<<"Number is not a armstrong"<<endl;
}
