#include<iostream>
using namespace std;

void input(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

int solve(int arr[], int n)
{
    int count = 0;
    int ans = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 1)
        {
            count++;
        }
        else
        {
            ans = max(ans, count);
            count = 0;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements in the array\n";
    input(arr, n);

    cout<<"Maximum consecutive 1's in array is "<<solve(arr, n)<<endl;

    return 0;
}
