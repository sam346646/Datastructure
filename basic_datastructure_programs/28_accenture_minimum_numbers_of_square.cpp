

/*
#include <iostream>
#include <cmath>
using namespace std;
bool square(int n)
{
    long double sqr = sqrt(n);
    return sqr == floor(sqr);
}
int fun(int n)
{
    if (square(n)) 
        return 1;
    int res = n;
    for (int i = 1; i*i < n; i++)
    {
        res = min(res,1+fun(n-i*i));
    }
    return res;
}
int main()
{
    int n=fun(13);
    cout<<n;
}*/