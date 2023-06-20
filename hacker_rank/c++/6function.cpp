#include<bits/stdc++.h>
using namespace std;
int greater4(int a,int b,int c,int d)
{
    int arr[5]={a,b,c,d};
    int max=arr[0];
    for(int i=0;i<4;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c,d;
    cin>>a>>b>>c>>d;   
    cout<<greater4(a,b,c,d);
    return 0;
}
