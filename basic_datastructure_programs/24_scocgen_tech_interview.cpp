#include<bits/stdc++.h>
using namespace std;
void sum_of_2_element_of_array_equals_target(int a[],int s,int t)
{
    int index_i=0,index_j=0,i,j;
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            if(a[i]+a[j]==t)
            {
                index_i=i;
                index_j=j;
            }
        }
    }
    cout<<index_i<<" "<<index_j;
}

void subset_of_array(int b[],int n)
{
    int i=0,j=0;
    cout<<"{{ },";
    for(i=0;i<n;i++)
    {
        cout<<"{"<<b[i]<<"},";
    }
}
int main()
{
    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    int target=6;
    sum_of_2_element_of_array_equals_target(a,n,target);
    int b[]={1,2,3,4};
    int size=sizeof(b)/sizeof(b[0]);
    subset_of_array(b,size);
}