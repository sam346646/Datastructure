#include<bits/stdc++.h>
using namespace std;

class box
{
  int length;
  int breadth;
  int height;
  public:
  box()
  {
      length=0;
      breadth=0;
      height=0;
  }  
  box(int l,int b,int h)
  {
      length=l;
      breadth=b;
      height=h;
  }
  box(box &b)
  {
      length=b.length;
      breadth=b.breadth;
      height=b.height;
  }
  int getLength()
  {
      return this->length;
  }
  int getBreadth()
  {
      return this->breadth;
  }
  int getHeight()
  {
      return this->height;
  }
  long long CalculateVolume();
  
  bool operator<(box &b)
  {
        if(this->length<b.length)
        {
            return true;
        }
        else if(this->length==b.length)
        {
            if(this->breadth<b.breadth)
            {
                return true;
            }
            else if(this->breadth==b.breadth)
            {
                if(this->height<b.height)
                {
                    return true;
                }
            }
        }
        return false;
    }
    
    friend ostream &operator<<(ostream& out,box& B)
    {
        out <<B.length<<" "<<B.breadth<<" "<<B.height;
        return out;
    }
};
long long box::CalculateVolume()
{
    return (long long)(breadth)*length*height;
}
int main() {
    int n;
    cin>>n;
    box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }           
    return 0;
}
