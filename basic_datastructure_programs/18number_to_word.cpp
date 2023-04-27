#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp,rem,res[3],i,count=0;
    string str;
    string num[20]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string num2[10]={"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
    cout<<"Enter number ";
    cin>>n;
    if(n<20)
        cout<<num[n];
    else
    {
        temp=n;
        while(temp!=0)
        {
            rem=temp%10;
            res[count++]=rem;
            temp=temp/10;
        }
        reverse(res,res+count);
        if(count<=2)
            cout<<num2[res[0]]<<" "<<num[res[1]];
        else
            cout<<num[res[0]]<<" hundred "<<num2[res[1]]<<" "<<num[res[2]];
    }
}