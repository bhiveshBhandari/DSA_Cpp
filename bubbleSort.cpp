#include<iostream>
using namespace std;

int main()
{
    int n,c=1;
    cout << "Enter number of elements in the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements" << endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    while (c<n)
    {
        for(int i=0;i<n-c;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        c++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    } 
}