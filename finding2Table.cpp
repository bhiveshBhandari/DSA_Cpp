#include<iostream>
using namespace std;
int twosTable(int num)
{
    cout<<2*num << endl;
    if(num<10)
    {
        num++;
        twosTable(num);
    }
}

int main()
{
    int a;
    cout<<"Enter the start number: ";
    cin>>a;
    twosTable(a);
}