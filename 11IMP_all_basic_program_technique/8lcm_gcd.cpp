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

a=[1,2,3]
b=[x,y,z]
res=[]
j=0
k=0
res_len=len(a)+len(b)
for i in range(res_len):
    if i%2==0:
        res.append(a[j])
        j+=1
    else:
        res.append(a[k])
        k+=1

for i in res:
    print(i,e)
