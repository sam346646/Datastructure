#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Perfect number"<<endl;
    int num,sum=0,i;
    cout<<"Enter the number ";
    cin>>num;
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
            sum+=i;
    }
    cout<<"Sum is "<<sum<<endl;
    if(sum==num)
        cout<<"Number is perfect number"<<endl;
    else    
        cout<<"Number is not a perfect number"<<endl;
}
