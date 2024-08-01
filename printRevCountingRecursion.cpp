#include<iostream>
using namespace std;
void printRev(int num)
{
    num--;
    cout<<num;
    cout<<" ";
    if(num>1){
        printRev(num);
    }
}

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    printRev(a);
    return 0;
}