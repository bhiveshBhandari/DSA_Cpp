#include<iostream>
using namespace std;

void printSubArray(int arr[],int n)
{
    int firstSub;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<j;k++)
            {
                while(k==1)
                {
                    firstSub = arr[k+1]-arr[k];
                }
                int sub = arr[k+1]-arr[k];
                if(firstSub!=sub){
                    break;
                }
                for(int l=i;l<j;l++){
                cout<<arr[l];
            }
            }

            cout << endl;
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
    printSubArray(arr,n);
}