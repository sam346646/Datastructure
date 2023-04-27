#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Palindrome"<<endl;
    int num,rem,rev=0;
    cout<<"Enter the number ";
    cin>>num;
    int n=num;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<"Reverse of number is "<<rev<<endl;
    if(rev==num)
        cout<<"Number is palindrome"<<endl;
    else    
        cout<<"Number is not a palindrome"<<endl;
}
