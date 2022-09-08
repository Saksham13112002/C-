/*  Time Complexity -> O(n)  */

#include<iostream>
using namespace std;

void input(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

int solve(int arr[], int n)
{
    int ans = 1;
    int curr = 1;

    for(int i=0;i<n-1;i++)
    {
        if((arr[i]%2==0 && arr[i+1]%2!=0) || (arr[i]%2!=0 && arr[i+1]%2==0))
        {
            curr++;
            ans = max(curr, ans);
        }
        else
            curr = 1;
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

    cout<<"The longest even odd subarray is: "<<solve(arr, n)<<endl;
    
    return 0;
}
