#include<bits/stdc++.h>
using namespace std;
void mergesort(int [],int,int);
void merge(int [],int,int,int);
void quicksort(int [],int,int);
int partition(int [],int,int);

void bubble(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    cout<<"After sorting ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void selection(int a[],int n)
{
    int min_index;
    for(int i=0;i<n-1;i++)
    {
        min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_index])
            {
                min_index=j;
            }
        }
        swap(a[min_index],a[i]);
    }
    cout<<"After sorting ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
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

void quicksort(int a[],int low,int high)
{
    int part;
	if(low<high)
	{
		part=partition(a,low,high);
		quicksort(a,low,part-1);
		quicksort(a,part+1,high);
		
	}
}
int partition(int a[],int low,int high)
{
	int pivot,pi;
    pivot=a[low];
	pi=low;
    for(int i=low+1;i<=high;i++)
    {
        if(a[i]<pivot)
        {
            pi++;
            swap(a[pi],a[i]);
        }
    }
    swap(a[pi],pivot);
    return pi;
}

void insertion(int a[],int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    cout<<"After sorting ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";         
}

int main()
{
    cout<<"Sorting techniques"<<endl;
    int a[100],ch,n;
    while(1)
    {
        cout<<"\n1.Bubble \n2.Selection \n3.Merge \n4.Quick \n5.insertion \n6.Exit"<<endl;
        cout<<"Enter your choice ";
        cin>>ch;
        cout<<"Enter number of elements ";
        cin>>n;
        cout<<"Enter elements ";
        for(int i=0;i<n;i++)
            cin>>a[i];
        switch(ch)
        {
            case 1:bubble(a,n);
                    break;
            case 2:selection(a,n);
                    break;
            case 3:mergesort(a,0,n-1);
                   cout<<"After sorting ";
                   for(int i=0;i<n;i++)
                        cout<<a[i]<<" ";
                    break;
            case 4:quicksort(a,0,n-1);
                   cout<<"After sorting ";
                   for(int i=0;i<n;i++)
                        cout<<a[i]<<" ";
                    break;
            case 5:insertion(a,n);
                    break;
            case 6:exit(0);
            default:cout<<"Invalid choice"<<endl;
        }
    }  
}
