#include<iostream>
using namespace std;

int printNoInc(int n)
{
    if(n==0){
        return 0;
    }
    cout<<n<<endl;
    return printNoInc(n-1);
}

int main(){
    int n =10;
    printNoInc(n);
}