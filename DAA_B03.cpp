#include<iostream>
#include<cmath>
using namespace std; 
bool valid(int per_day,int arr[], int d,int n)
{
    int num_day = 0;
    for (int j = 0; j < n; j++) 
    {
        int day_req= ceil ((double)(arr[j])/(double)(per_day));
        num_day += day_req;
        if (num_day > d) {
            return false;
        }
    }
    return num_day <= d;
}
int mintask(int arr[], int d,int n)
{
 
    int l = 1;
    int r = n;
    for (int j=0;j<n;j++) 
	{
        r = max(r, arr[j]);
    }
    int per_day_task = 0;
    while (l <= r) 
	{
        int m= (l+r)/ 2;
        if (valid(m, arr, d,n)) {
            per_day_task = m;
            r = m - 1;
        }
        else
		 {
            l = m + 1;
        }
    }
    return per_day_task;
}
int main()
{
	int i,n,d,arr[50];
    cout<<"Enter the no. of tasks : ";
    cin>>n;
	cout<<"Enter the no. of days to complete all tasks : ";
	cin>>d;
    cout<<"Enter the tasks : ";
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	cout<<"\nThe are tasks : ";
	for(i=0;i<n;i++)
    {
    	cout<<arr[i]<<endl;
	}
    cout << "Minimum amount of work to be done per day to complete the tasks is : "<<mintask(arr, d,n) << endl;
    return 0;
}
