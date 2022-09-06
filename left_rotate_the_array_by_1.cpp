/*  This program rotates an array in left by 1.    */

#include<iostream>
using namespace std;

// To enter the elements in the array
void input(int arr[], int n)
{
    cout<<"Enter the elements in the array\n";

    for(int i=0;i<n;i++)
        cin>>arr[i];
}

// To rotate the array in left
void solve(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        swap(arr[i], arr[i+1]);
    }
}

// To print array elements
void output(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    input(arr, n);

    solve(arr, n);

    cout<<"The array after left rotated by 1 is\n";
    output(arr, n);

    return 0;
}
