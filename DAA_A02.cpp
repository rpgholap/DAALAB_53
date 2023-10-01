#include<iostream>
using namespace std;
int findNum(int n)
{
	int num=1, cnt=0;
	while(true)
	{
		int temp=num;
		while(temp%5==0)
		{
			cnt++;
			temp/=5;
		}
		if(cnt>=n)
		{
			return num;
		}
		
		num++;
	}
}

int main()
{ 
	int n;
	cout<<"Enter the number:";
	cin>>n;
	cout<<findNum(n);
	return 0;
}
