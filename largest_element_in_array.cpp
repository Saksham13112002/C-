#include<iostream>
using namespace std;

void input(int arr[], int n)
{
    cout<<"Enter the elements in the array\n";

    for(int i=0;i<n;i++)
        cin>>arr[i];
}

int solve(int arr[], int n)
{
    int maxi = arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    input(arr, n);

    cout<<"The largest element in the array is "<<solve(arr, n)<<endl;

    return 0;
}
