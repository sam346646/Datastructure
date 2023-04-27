#include<bits/stdc++.h>
using namespace std;
void binarysearch(int [],int,int,int);

void linearsearch(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            cout<<"Element "<<key<<" found at "<<i+1<<"th position";
            return;
        }
    }  
    cout<<"Element not found";
}

void binarysearch(int a[],int l,int h,int key)
{
    int m;
    while(l<=h)
    {
        m=l+h/2;
        if(a[m]==key)
        {
            cout<<"Element "<<key<<" found at "<<m+1<<"th position";
            return;
        }
        else if(key<a[m])
            h=m-1;
        else
            l=m+1;
    }
}

int main()
{
    cout<<"Searching techniques"<<endl;
    int a[100],ch,n,key;
    while(1)
    {
        cout<<"\n1.Linear \n2.Binary-input should be sorted order \n3.Exit"<<endl;
        cout<<"Enter your choice ";
        cin>>ch;
        cout<<"Enter number of elements ";
        cin>>n;
        cout<<"Enter elements ";
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<"Enter searching element ";
        cin>>key;
        switch(ch)
        {
            case 1:linearsearch(a,n,key);
                    break;
            case 2:binarysearch(a,0,n-1,key);
                    break;
            case 3:exit(0);
            default:cout<<"Invalid choice"<<endl;
        }
    }  
}
