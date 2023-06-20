#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int row,qry,i,j,k,col,q1,q2;
    cin>>row>>qry;
    int *a[row];
    for(i=0;i<row;i++)
    {
        cin>>col;
        a[i]=new int[col];
        for(j=0;j<col;j++)
            cin>>a[i][j];
    }
    for(k=0;k<qry;k++)
    {
        cin>>q1>>q2;
        cout<<a[q1][q2]<<endl;
    }
}
