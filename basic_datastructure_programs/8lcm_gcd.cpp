#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"LCM AND GCD(HCF)"<<endl;
    int a,b,max;
    cout<<"Enter two number ";
    cin>>a>>b;
    
    max=a>b?a:b;
    while(1)
    {
        if(max%a==0 && max%b==0)
        {
            cout<<"LCM is "<<max<<endl;
            break;
        }
        max++;
    }

    int lcm=max;
    cout<<"GCD is "<<(a*b)/lcm;  //formula
}
