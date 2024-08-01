#include<iostream>
using namespace std;

int LinearSearch(int el,int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==el)
        {
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int n,e;
    cout << "Enter number of elements in the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements" << endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout << "Enter the element you need to search" << endl;
    cin >> e;
    int pos = LinearSearch(e,arr,n);
    cout<< "Element" << e << "found at"<< pos <<endl;
}