#include<iostream>
using namespace std;
int main()
{
	long int n;
	cin>>n;
	long int a[n];
	long int counter=0;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i+1]==0&&a[i+2]==0)
		{
			counter++;
			i++;
		}
		else if(a[i+1]==0&&a[i+2]==1)
		{
			counter++;
		}
		else if(a[i+1]==1)
		{
			counter++;
			i++;
		}
		else if(a[i+1]==0)
		counter++;
	}
	cout<<counter;
}
