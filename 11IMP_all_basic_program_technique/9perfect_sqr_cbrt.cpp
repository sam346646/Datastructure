#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Perfect square"<<endl;
    int num;
    cout<<"Enter number ";
    cin>>num;
    //floor(sqrt(num))==ceil(sqrt(num))-because if the sqrt is floating like 
    //3.2:floor()-3,ceil()-4 for not perfect square.
    //2:floor()-2,ceil()-2 for perfect square.
    //Also used to check whether the result is integer or not
    int sr=sqrt(num);
    if(sr*sr==num)              
        cout<<"Number is perfect square"<<endl;
    else    
        cout<<"Number is not perfect square"<<endl;

    cout<<"Perfect cube"<<endl;
    cout<<"Enter number ";
    cin>>num;
    int cr=cbrt(num);
    if(cr*cr*cr==num)              
        cout<<"Number is perfect cube"<<endl;
    else    
        cout<<"Number is not perfect cube"<<endl;
}
