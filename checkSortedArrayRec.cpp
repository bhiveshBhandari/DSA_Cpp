#include <iostream>
using namespace std;

bool checkSorted(int arr[],int n)
{
    if(n<=1)
    {
        return true;
    }

    bool restArray = checkSorted(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
}

int main()
{
    int n;
    cout << "Enter number of elements in the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements" << endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<checkSorted(arr,n);
}