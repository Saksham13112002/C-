/*  This program takes a sorted array as an input and returns an integer value that represents the number of 
    distinct elements in the array.    */

#include<iostream>
using namespace std;

// to enter the elements in the array
void input(int arr[], int n)
{
    cout<<"Enter the elements in the array\n";

    for(int i=0;i<n;i++)
        cin>>arr[i];
}

// function to calculate number of distinct elements
int solve(int arr[], int n)
{
    int i=0,count=1;

    for(int j=1;j<n;j++)
    {
        if(arr[i] != arr[j])
        {
            count++;
            i = j;
        }
    }
    return count;
}

// driver code
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    input(arr, n);

    cout<<"The number of distinct elements in the array is "<<solve(arr, n)<<endl;

    return 0;
}
