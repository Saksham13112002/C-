#include<iostream>
using namespace std;

// to enter the elements in the array
void input(int arr[], int n)
{
    cout<<"Enter the elements in the array\n";

    for(int i=0;i<n;i++)
        cin>>arr[i];
}

// Function to check whether the array is sorted or not
bool solve(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i] > arr[i+1])
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    input(arr, n);

    bool ans = solve(arr, n);

    if(ans)
        cout<<"Sorted.\n";
    else
        cout<<"Not Sorted.\n";

    return 0;
}
