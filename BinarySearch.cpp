#include<iostream>
using namespace std;

int binarySearch(int n, int arr[],int el)
{
    int s = 0;
    int e = n;
   
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid] == el)
        {
            return mid;
        }
        else if (arr[mid]>el)
        {
            e = mid-1;
        }
        else{
            s = mid +1;
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
    cout << "Enter the elements in sorted manner" << endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout << "Enter the element you need to search" << endl;
    cin >> e;

    int pos = binarySearch(n,arr,e);
    cout<< "Element " << e << "found at index "<< pos <<endl;
}