#include<iostream>
using namespace std;

void maxTillI(int arr[],int n)
{
    int max = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        cout<<max << " ";
    }
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

    maxTillI(arr,n);
}