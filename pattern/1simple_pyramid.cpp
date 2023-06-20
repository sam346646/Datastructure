#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Simple pyramid using *"<<endl;
    for(int i=1;i<10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }

    cout<<"Simple inverted pyramid using *"<<endl;
    for(int i=10;i>=1;i--)
    {
        for(int j=1;j<i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }


    cout<<"Perfect pyramid using *"<<endl;
    int rows=10;
    for(int i=1;i<rows;i++)
    {
        for(int sp=1;sp<=(rows-i);sp++)
            cout<<" ";
        for(int k=0;k<i;k++)
            cout<<"* ";
        cout<<"\n";
    }

    cout<<"Inverted perfect pyramid using *"<<endl;
    rows=10;
    for(int i=10;i>=1;i--)
    {
        for(int sp=1;sp<=(rows-i);sp++)
            cout<<" ";
        for(int k=0;k<i;k++)
            cout<<"* ";
        cout<<"\n";
    }

    cout<<"Simple pyramid using number"<<endl;
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    cout<<"Simple inverted pyramid using number"<<endl;
    for(int i=10;i>=1;i--)
    {
        for(int j=1;j<i;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }    


    cout<<"Perfect pyramid using number starting from 1"<<endl;
    rows=10;
    int no=0;
    for(int i=1;i<rows;i++)
    {
        for(int sp=0;sp<(rows-i);sp++)
            cout<<" ";
        for(int j=1;j<i;j++)
        {
            if(no<=9)
                cout<<no++<<"  ";   //00,01,02......
            else    
                cout<<no++<<" ";
        }
        cout<<"\n";
    }   


    cout<<"Simple pyramid using alphabet"<<endl;
    char alpha='A';
    for(int i=1;i<10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<alpha<<" ";
        }
        cout<<"\n";
        alpha++;
    }
    
    cout<<"Simple inverted pyramid using alphabet"<<endl;
    alpha='A';
    for(int i=10;i>=1;i--)
    {
        for(int j=1;j<i;j++)
        {
            cout<<alpha<<" ";
        }
        cout<<"\n";
        alpha++;
    }


    cout<<"Simple inverted pyramid using alphabet every row starting with A "<<endl;
    alpha='A';
    for(int i=1;i<10;i++)
    {
        alpha='A';
        for(int j=1;j<i;j++)
        {
            cout<<alpha<<" ";
            alpha++;
        }
        cout<<"\n";
    }


    cout<<"Pascal's Triangle "<<endl;
    rows=6;
    int coef;
    for(int i=0;i<=rows;i++)
    {
        for(int sp=0;sp<(rows-i);sp++)
            cout<<" ";
        for(int j=0;j<=i;j++)
        {
            if(j==0 || j==i)
                coef=1;
            else
                coef=coef*(i-j+1)/j;
            if(coef<=9)
                cout<<coef<<"  ";   //00,01,02......
            else    
                cout<<coef<<" ";
        }
        cout<<"\n";
    }


    cout<<"Floyd's Triangle "<<endl;
    rows=4;
    int count=1;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<count++<<" ";
        cout<<"\n";
    }
}