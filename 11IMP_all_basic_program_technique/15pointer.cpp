#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int *ptr;  //*ptr=&a;
    ptr=&a;   //type of ptr should be same as variable i.e,a is int.
    cout<<"a:"<<a<<endl;
    cout<<"&a:"<<&a<<endl;
    cout<<"ptr:"<<ptr<<endl;
    cout<<"*ptr:"<<*ptr<<endl;
    cout<<"&ptr:"<<&ptr<<endl<<endl;
    
    char s[]="sam";
    char *potr=s;    //can't pass &s
    cout<<"s:"<<s<<endl; //sam
    cout<<"&s:"<<&s<<endl; //starting address of str
    cout<<"potr:"<<potr<<endl;  //starting address of str
    cout<<"*potr:"<<*potr<<endl; //s   not sam
    cout<<"&potr:"<<&potr<<endl<<endl; //starting address of str

    string str="sam";
    string *pt=&str;
    cout<<"str:"<<str<<endl; //sam
    cout<<"&str:"<<&str<<endl; //starting address of str
    cout<<"pt:"<<pt<<endl;  //starting address of str
    cout<<"*pt:"<<*pt<<endl; //sam
    cout<<"&pt:"<<&pt<<endl; //starting address of str
    cout<<"*pt+1"<<*pt+"1"<<endl; //sam1  *(pt+1) give infininte loop
}