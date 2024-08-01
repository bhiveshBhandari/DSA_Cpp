#include<iostream>
using namespace std;
int power(int base,int exponent)
{
    if(exponent == 0)
    {
        return 1;
    }
    else{
        return base*power(base,exponent-1);
    }
}

int main()
{
    int num = power(10,2);
    cout << num;
}