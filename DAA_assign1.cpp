#include<iostream>
using namespace std;

int countZero(int arr[], int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==1)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return n-start;
}

int main()
{
    int n;
    cout <<"\nEnter the size of the array: ";
    cin >>n;

    int arr[n];

    cout <<"\nEnter the elements of the array (1s and 0s) 1s followed by 0s: ";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }

    cout << "Count of zeroes: "<<countZero(arr, n) << endl;
    return 0;
}
