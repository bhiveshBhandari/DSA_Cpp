#include<iostream>
using namespace std;

int fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*fact(n-1);
}

int main()
{
    int a = 12;
    int r = fact(a);
    cout << r;
}