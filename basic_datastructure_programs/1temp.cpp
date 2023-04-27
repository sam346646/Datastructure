#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<string>
#include<cstring>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    /*
    prime no:2,3,5,7,11,13,17...
    factorial:4!=4*3*2*1=24
    palindrome:121,232...
        while reversing get the same no.
    armstrong:0,1,153,370,1634...
        sum of digits raised to the power number of digit is gives number itself.
        153=1^3+5^3+3^3
        1634=1^4+6^4+3^4+4^4
        p=pow(a,b)-where p has to be double,if it is int p=pow(5,3)=124 but result should be 125.
    perfect number:6,28..
        sum of its divisor=number
        6=1+2+3
        28=1+2+4+7+14
    lcm-divide...
    gcd/hcf=(a*b)/lcm(a,b)
    anagram-  race-care,part-tarp no need to be palindrome
    perfect square:1,4,9,16,25,36....
    perfect cube root:1,8,27,64.....
    harshad number: n % (sum of digits of n) == 0
    happy number: sum=sum+rem*rem till 9 iteration if sum becomes 1 then it is
    leap year :2000,2400-(%4,%400=0),(%100!=0)
    */

    /*
    IMP:
    p=pow(a,b)-where p has to be double,if it is int p=pow(5,3)=124 but result should be 125.
    */
    unsigned long long int a=12175723232323125556; 
    //long int,unsigned long int,long long int-2^63,signed int...
    cout<<a<<endl;

    int n=9;
    cout<<n/2<<endl;

    string str=to_string(n);     //Convert int,float to string
    cout<<str<<" ";
    n=stoi(str);                 //Convert string to int,float 
    cout<<n<<endl;

    string st="sam";
    n=st.length();
    char s[n];
    strcpy(s,st.c_str());     //Converting string to character array
    cout<<strrev(s)<<endl;

    char s1[10]="sam";
    string st1;
    for(int i=0;i<strlen(s1);i++)     //Converting character array to string
        st1=st1+s1[i]; 
    cout<<st1<<endl;

    int arr[]={1,2,3,4,5};
    int size=5;
    vector <int> av(arr+0,arr+size);   //Converting array to vector
    for(int i:av)
        cout<<i<<" ";
    cout<<endl;
}
