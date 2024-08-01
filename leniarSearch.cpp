#include <iostream>
using namespace std;

void leniarSearch(int arr[],int num,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i] == num)
        {
            cout<<"Array found at position - " << i+1<<endl;
            break;
        }
    }
}

int main()
{
    int size,find;
    cout<<"Enter number of elements"<< endl;
    cin>>size;
    int arr[size];
    cout << "Enter array elements" << endl;
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }
    cout<<"Enter element to find"<< endl;
    cin>>find;
    leniarSearch(arr,find,size);
    
    return 0;
}