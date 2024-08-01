#include<iostream>
using namespace std;

void subArraySum(int arr[],int n)
{
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum =0;
        for(int j=i;j<n;j++)
        {
            sum += arr[j];
            cout<<sum<<endl;
        }
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
    subArraySum(arr,n);
}