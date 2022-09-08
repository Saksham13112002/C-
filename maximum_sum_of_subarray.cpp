#include<iostream>
using namespace std;

int solve(int arr[], int n)
{
    int ans = arr[0];
    int max_ending = arr[0];

    for(int i=1;i<n;i++)
    {
        max_ending = max(max_ending + arr[i], arr[i]);
        ans = max(ans, max_ending);
    }
    return ans;
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
