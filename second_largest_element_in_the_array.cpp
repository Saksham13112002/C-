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
    // inbuilt function to sort the array in reverse order
    sort(arr, arr+n, greater<int>());
    return arr[1];
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    input(arr, n);

    cout<<"The 2nd largest element in the array is "<<solve(arr, n)<<endl;

    return 0;
}
