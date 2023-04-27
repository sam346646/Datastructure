#include<bits/stdc++.h>
using namespace std;

void mergesort(int [], int, int);
void merge(int [], int, int, int);

int main()
{
  int n,i,a[10],low,high;
  cout<<"Enter no elemnt & ele";
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];


    low=0;high=n-1;
    mergesort(a, low, high);
    cout<<"After sort ";
    for(i=0;i<n;i++)
      cout<<a[i]<<" ";
 }

void mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}

void merge(int a[],int low,int mid,int high)
{
	int i,j,k,t[10];
	i=low;
	j=mid+1;
	k=low;
	while((i<=mid) && (j<=high))
	    if(a[i]<=a[j])
	        t[k++]=a[i++];
	    else
	        t[k++]=a[j++];
	while(i<=mid)
	    t[k++]=a[i++];
	while(j<=high)
	    t[k++]=a[j++];
	for(i=low;i<=high;i++)
	    a[i]=t[i];
}

