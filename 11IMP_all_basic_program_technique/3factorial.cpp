#include<bits/stdc++.h>
using namespace std;
int facto(int n)
{
    if(n==1)
        return 1;
    return n*facto(n-1);  
}

int main()
{
    cout<<"Factorial"<<endl;
    int num,fact=1;
    cout<<"Enter the number ";
    cin>>num;
    for(int i=1;i<=num;i++)
        fact=fact*i;
    cout<<"Factorial is "<<fact<<endl;

    cout<<"Factorial using recursion is "<<facto(num);      
}
