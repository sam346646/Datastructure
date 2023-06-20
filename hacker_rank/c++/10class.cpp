#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student
{
    public:
    int age;
    string f_name;
    string l_name;
    int std;
};
int main() {
    Student st;
    int age;string f_name;string l_name;int std;
    cin>>age>>f_name>>l_name>>std;
    st.age=age; 
    st.f_name=f_name;
    st.l_name=l_name;
    st.std=std;
    cout<<st.age<<endl<<st.l_name<<", "<<st.f_name<<endl<<st.std<<endl<<endl;
    cout<<st.age<<","<<st.f_name<<","<<st.l_name<<","<<st.std;  
    return 0;
}
