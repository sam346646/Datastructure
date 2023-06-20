#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=12,n_times=3,i,r_no;
    string temp,repeat;

    temp=to_string(n);   //Convert int,float to string

    for(i=0;i<n_times;i++)
        repeat=repeat+temp;
    
    r_no=stoi(repeat);    //Convert string to int,float
    cout<<r_no<<endl; 
}