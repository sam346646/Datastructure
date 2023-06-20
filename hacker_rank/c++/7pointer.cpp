#include<bits/stdc++.h>
using namespace std;

void calc(int *a,int *b) 
{
    int sum=*a+*b;
    int dif=*a-*b > 0 ? *a-*b : -(*a-*b);
    *a=sum;
    *b=dif; 
}
int main() {
    int a,b;
    cin>>a>>b;
    calc(&a,&b);
    cout<<a<<endl;
    cout<<b;
    return 0;
}
