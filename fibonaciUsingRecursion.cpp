#include<iostream>
using namespace std;
int fibonaci(int n){
    if(n<=1){
        return n;
    }

    else{  
        return fibonaci(n-1) + fibonaci(n-2);
    }
}

void fibonaci_series(int count)
{
    int i;
    for(i = 0;i<count;i++)
    {
        std::cout<<fibonaci(i);
        std::cout<<" ";
    }
}

int main(){
    fibonaci_series(10);
    return 0;
}
