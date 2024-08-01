#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int i,int key)
{
    if(arr[i]==key)
    {
        return i;
    }

    return firstOcc(arr,n,i+1,key);
}

int main()
{
    int arr[] = {1,4,2,5,6,3,2,8};
    int n = 8;
    int key = 1;
    cout<< firstOcc(arr,n,0,key);
}