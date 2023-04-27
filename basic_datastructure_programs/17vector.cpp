#include<bits/stdc++.h>
using namespace std;
void vec_function(vector <int> vect);
int main()
{
    cout<<"Vector:Dynamic array"<<endl;
    vector <int> a={2,1,3,4};
    vector <int> b{1,2,3,4};
    vector <int> c(5,12);  //size,initial value for 5 indexes
    vector <int> d;

    cout<<"Taking element from keyboard ";
    int val,n=5;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        d.push_back(val);
    }
    for(int i:d)
        cout<<i<<" ";
    cout<<"\n";

    cout<<"2D Vector"<<endl;
    vector <vector <int>> e;
    int m=3;
    n=3;
    for(int i=0;i<m;i++)
    {
        vector <int> temp;
        for(int j=0;j<n;j++)
        {
            cin>>val;
            temp.push_back(val);
        }
        e.push_back(temp);
        temp.clear();
    }
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cout<<e[i][j]<<" ";
    cout<<"\n";



    cout<<"Converting array to vector"<<endl;
    int arr[]={1,2,3,4,5};
    int size=5;
    vector <int> av(arr+0,arr+size);
    for(int i:av)
        cout<<i<<" ";
    cout<<endl;



    cout<<"Diaplaying and accesing vector elements "<<endl;

    for(int i:a)
        cout<<i<<" ";
    cout<<"\n";

    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<"\n";

    for(const int& i:a)      //const &i:a
        cout<<i<<" ";
    cout<<"\n";

    cout<<"a[1]:"<<a[1]<<endl;

    cout<<"Changing element "<<endl;
    a[1]=10;
    a.at(2)=20;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<"\n";

    cout<<"a.size() "<<a.size()<<endl;
    cout<<"a.at() "<<a.at(1)<<endl;   //0,1,2...
    cout<<"a.push_back() and a.pop_back() "<<endl;
    a.push_back(5);   //add element to the last 
    a.push_back(6);
    a.pop_back();     //Removes last element
    for(const int& i:a)     
        cout<<i<<" ";
    cout<<"\n";
    cout<<"a.front() "<<a.front()<<endl;  //a.begin(),end() iterator
    cout<<"a.back() "<<a.back()<<endl;
    
    sort(a.begin(),a.end());
    for(int i:a)
        cout<<i<<" ";
    cout<<"\n";

    reverse(a.begin(),a.end());
    for(int i:a)
        cout<<i<<" ";
    cout<<"\n";


    vector <int> :: iterator iter;   //Declaring iterator

    iter=a.begin();   //setting iterator to first
    iter=a.end()-1;  //setting iterator to last
    iter=a.begin()+2;  //setting iterator to (0+2):2nd index
    iter=a.begin();

    cout<<"*iter: "<<*iter<<endl;
    cout<<"*iter+1: "<<*iter+1<<endl;
    cout<<"*(iter+1): "<<*(iter+1)<<endl;
    a.erase(iter);   //Remove the element pointed by iterator
    a.insert(iter,20);  //(iterator,value) insert value at iterator postition

    cout<<"Looping through vector element "<<endl;
    for(iter=e[0].begin();iter<e[0].end();iter++)
        cout<<*iter<<" ";
    cout<<"\n";


    cout<<"Passing vector to function ";
    vector <int> vect{1,2,3,4};
    vec_function(vect);

    cout<<"String implementation in string"<<endl;
    vector <string> str={"sam","manasseh","Rakesh","GK"};
    for (string i:str)
        cout<<i<<" ";
    cout<<"\n";


}
void vec_function(vector <int> vect)
//void vec_function(const vector <int> &vect)-if we dont want a function to modify a vector
//removing const works similiar to first
{
    for(int i:vect)
        cout<<i<<" ";
    cout<<"\n";
}