#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j,k;
    int a[1000];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(j=n-1;j>=0;j--)
        cout<<a[j]<<" ";
    return 0;
}
