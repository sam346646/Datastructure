#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
	cin>>n;
	int x;
	cin>>x;
    int parent[n];
	int sub[n] ;
		
	int c=0,i=0;
	for(i=0;i<n;i++)
	{
		cin>>parent[i];
		if(parent[i]!=-1)
			++sub[parent[i]];
	}
	for(i=0;i<n;i++)
	{
        cout<<sub[i]<<" ";
		if(sub[i]>=x)
			++c;
	}
    cout<<c;

}