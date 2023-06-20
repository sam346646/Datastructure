#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
    int age;
    string f_name;
    string l_name;
    int std;
};  //st1,st2;
int main() {
    Student s1;     //s1[10]
    cin>>s1.age>>s1.f_name>>s1.l_name>>s1.std;  //s1[i].age
    cout<<s1.age<<" "<<s1.f_name<<" "<<s1.l_name<<" "<<s1.std;   
    return 0;
}
