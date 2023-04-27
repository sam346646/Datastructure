#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,c1,r2,c2,i,j,k;
    cout<<"Enter rows and columns of first matrix ";
    cin>>r1>>c1;
    cout<<"Enter rows and columns of second matrix ";
    cin>>r2>>c2;
    if(c1!=r2)
        cout<<"\nCan't perform matrix multiplication"<<endl;
    else
    {
        int a[r1][c1],b[r2][c2],mul[r1][c2];
        cout<<"Enter elements of first matrix ";
        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
                cin>>a[i][j];
        cout<<"Enter elements of second matrix ";
        for(i=0;i<r2;i++)
            for(j=0;j<c2;j++)
                cin>>b[i][j];
        
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                mul[i][j]=0;
                for(k=0;k<c1;k++)
                    mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
            }
        }
                
        cout<<"Matrix after multiplication is "<<endl;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
                cout<<mul[i][j]<<" ";
            cout<<"\n";
        }
    }
}