#include<iostream>
using namespace std;

int solve(int arr[], int n)
{
    int currentsum = 0;
    int maxsum = 0;

    for(int i=0;i<n;i++)
    {
        currentsum += arr[i];

        if(currentsum < 0)
        {
            currentsum = 0;
        }

        maxsum = max(maxsum, currentsum);
    }
    return maxsum;
}

void input(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements in the array\n";
    input(arr, n);

    cout<<"The maximum sum is: "<<solve(arr, n)<<endl;
    
    return 0;
}
