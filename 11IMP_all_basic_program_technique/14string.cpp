#include<bits/stdc++.h>
using namespace std;
void lowercase(char *str)
{
    while(*str)
    {
        if(*str>='A' && *str<='Z')
            *str=*str+32;     //-32 works as uppercase,It works on ASCII character
        str++;                //0-48,A-65,a-97
    }
}
int main()
{
    string str1="samm";
    char str2[10]="manasseh";
    string str3[10]={"sam","manasseh"};
    cout<<str1<<" "<<str2<<endl;
    int i;
    for(i=0;i<2;i++)
        cout<<str3[i]<<" ";  //cout<<str3; doesn't work

    i=0;
    while(str1[i]!='\0')
    {
        cout<<str1[i]<<" ";
        i++;
    }

    string str5;
    cout<<"\nEnter string ";
    //getline(cin,str5);
    cout<<"String: "<<str5<<endl;

    cout<<"Converting string to character array"<<endl;
    string str="Welcome";
    int n=str.length();
    char char_str[n+1];
    strcpy(char_str,str.c_str());
    for(int i=0;i<n;i++)
        cout<<char_str[i];
    cout<<"\nstrupr():"<<strupr(char_str)<<endl;


    cout<<"\nString function"<<endl;    //doesn't work for character array
    cout<<"Length of the string "<<str1.length()<<" "<<str1.size()<<endl<<endl; //both same
    
    cout<<"compare():"<<str1.compare("samm")<<endl;  //return 0,-ve,+ve if strings are same,fisrt string smaller than second etc.. 
    
    cout<<"at():"<<str1.at(2)<<endl;
    str1.at(2)='n';

    cout<<"find():"<<str1.find("m")<<endl;
    cout<<"find_first_of():"<<str1.find_first_of("m")<<endl;  //first occurence
    cout<<"find_first_not_of():"<<str1.find_first_not_of("m")<<endl;  //first occurence of other than m
    cout<<"find_last_of():"<<str1.find_last_of("m")<<endl;  //last_last_not_of()
    cout<<"replace():"<<str1.replace(2,2,"na")<<endl<<endl;   //pos,len,replcaing_string

    cout<<"substr():"<<str1.substr(0,3)<<endl<<endl;    //2 parametr:starting position and length of substring,if length ommited till last it displays

    cout<<"append():"<<str1.append(" man")<<endl;   //Stores in str1
    cout<<"insert():"<<str1.insert(8,"asseh")<<endl<<endl;
    str1.push_back('a');  //insert single character at last
    str1.push_back('n');
    str1.pop_back();      //removes last character
    cout<<str1<<endl<<endl;

    string :: iterator iter;
    iter=str1.begin();
    cout<<"*iter "<<*iter<<endl;

    reverse(str1.begin(),str1.end());  //Inorder to reverse a string works without iterator
    sort(str1.begin(),str1.end());       //Inorder to sort the string
    cout<<str1<<endl;

    
    cout<<"Array of character"<<endl;
    char s1='a';  //"a" doen't work  
    char s2[10]="Sam"; 
    char s3[]={'s','a','m'};

    cout<<s1<<" "<<s2<<" "<<endl;
    for(i=0;i<3;i++)
        cout<<s3[i];
    cout<<"\n";
    char s4[]="man";
    char s5[10];
    cout<<"strlen():"<<strlen(s2)<<endl;  //"sam"=3
    cout<<"strlwr():"<<strlwr(s2)<<endl;  //s2 changes to lowercase
    cout<<"strupr():"<<strupr(s2)<<endl;  //s2 changes to uppercase
    cout<<"strcat():"<<strcat(s2,s4)<<endl;  //s2 & s4 concatinates and stores it in s2
    cout<<"strcpy():"<<strcpy(s5,s4)<<endl;  //copies s4 to s5. 
    cout<<"strrev():"<<strrev(s5)<<endl;  //reverses s5 and stores it in s5
    cout<<"strcmp():"<<strcmp(s4,s5)<<endl;  //0,+ve,-ve if equal,first greater than second...
    cout<<"strchr():"<<strchr(s4,'n')<<endl;  //it just checks whether 'n' found or not by returning 'n' if found
    char s6[]="MAN";
    cout<<"strcasecmp():"<<strcasecmp(s5,s6)<<endl;  //0,+ve,-ve similiar to strcmp() it ignores case

    char *s7="sam";
    cout<<"*s7:"<<*s7<<endl;  //s point to address of first string
    
    cout<<"1.Length of string without using strlen()"<<endl;
    char s8[10]="sam";
    int count=0;
    while(s8[count]!='\0')
    {
        cout<<s8[i]<<" ";
        count++;
    }
    cout<<"\nstring length:"<<count<<endl;

    cout<<"2.Reversing string without strrev()"<<endl;
    char s9[10];
    int j=count-1;
    for(int i=0;i<count;i++) 
    {
        s9[i]=s8[j];
        j--;
    }
    s9[i]='\0';
    cout<<s9<<endl;

    cout<<"3.Converting string to lowercase without strlwr()"<<endl;
    char s10[]="Sam";
    lowercase(s10);
    cout<<"Lowercase is :"<<s10<<endl;

    cout<<*s10<<endl;    //s
    char *ptr=s10;
    cout<<*ptr<<endl;   //s
    cout<<ptr<<endl;    //sam
    cout<<&ptr<<endl;   //address of first character
    cout<<*(ptr+1)<<endl;   //a  * holds the value (ptr+1)means (starting_address+1)
}