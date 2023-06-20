#include<bits/stdc++.h>
using namespace std;
void create_vector_with_assigning_data()
{
    vector <int> e1={1,2,3,4};
    vector <int> e2{2,3,4,5,6,7,8};
    vector <int> e3(10,5); //size,initial value
    vector <char> e4={'a','b','c','d','e'};
    vector <string> e5={"sam","man","hello"};
    for(string i:e5)
        cout<<i<<" ";
}

void create_vector_taking_data_from_kb()
{
    vector <int> v1;
    int n,i,val;
    cout<<"Enter size of vector ";
    cin>>n;
    cout<<"Enter elements to the vector ";
    for(i=0;i<n;i++)
    {
        cin>>val;
        v1.push_back(val);
    }
    cout<<"Elements of vector are ";
    for(int i:v1)
        cout<<i<<" ";
    cout<<endl;
}

void create_two_dimensional_vector()
{
    vector <vector <int>> v;
    int row,col,i,j,val;
    cout<<"Enter number of rows ";
    cin>>row;
    for(i=0;i<row;i++)
    {
        cout<<"Enter number of columns ";
        cin>>col;
        vector <int> temp;
        for(j=0;j<col;j++)
        {
            cin>>val;
            temp.push_back(val);
        }
        v.push_back(temp);
    }
    cout<<"\nElements of 2D vector are "<<endl;
    for(auto row:v)    //auto only works
    {
        for(auto i:row)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }   
}

void display_vector()
{
    vector <int> v1={1,3,2,4};
    cout<<"Elements of vector are ";
    for(int i:v1)
        cout<<i<<" ";
    cout<<endl;

    cout<<"Elements of vector are ";
    for(const int& i:v1)
        cout<<i<<" ";
    cout<<endl;

    cout<<"Elements of vector are ";
    for(int i=0;i<4;i++)
        cout<<v1[i]<<" ";
    cout<<endl;
}

void vector_functions()
{
    vector<int> v={1,2,5,3,5,4,7};
    for(int i:v)
        cout<<i<<" ";
    cout<<"\n";

    cout<<"1.size():"<<v.size()<<endl;       //return length of vector

    cout<<"2.at(2):"<<v.at(2)<<endl;         //return element at specified index

    cout<<"3.push_back() & pop_back():"<<endl;     //insert element at end ,removes last element
    v.push_back(10);
    v.push_back(20);
    v.pop_back();
    for(int i:v)
        cout<<i<<" ";
    cout<<"\n";

    cout<<"4.front():"<<v.front()<<endl;    //returns first element

    cout<<"5.back():"<<v.back()<<endl;      //returns last element

    cout<<"6.empty():"<<v.empty()<<endl;    //returns 0/1(false/true) if vector is empty

    cout<<"7.sort():"<<endl;
    sort(v.begin(),v.end());
    for(int i:v)
        cout<<i<<" ";
    cout<<"\n";

    cout<<"8.reverse():"<<endl;
    reverse(v.begin(),v.end());
    for(int i:v)
        cout<<i<<" ";
    cout<<"\n";
}

void using_iterator()
{
    vector <int> v={1,2,3,4};
    vector <int> :: iterator iter;   //Declaring iterator
    iter=v.begin();                  //Setting iterator object,Here iterator is set to first element
    //iter=v.end();
    //iter=v.begin()+2;
    cout<<"*iter:"<<*iter<<endl;
    for(iter=v.begin();iter<v.end();iter++)
        cout<<*iter<<" ";
    cout<<"\n";
}

int main()
{
    /*
    create_vector_with_assigning_data();
    create_vector_taking_data_from_kb();
    display_vector();
    create_two_dimensional_vector();
    vector_functions();
    using_iterator();
    */
}