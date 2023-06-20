#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,o;
    cin>>m>>o;
    string num[10]={"","one","two","three","four","five","six","seven","eight","nine"};
    for(int n=m;n<=o;n++)
    {
    if(n<=9)
        cout<<num[n]<<endl;
    else {
        if(n%2==0)
            cout<<"even"<<endl;
        else    
            cout<<"odd"<<endl;
    }
    }
    return 0;
}
