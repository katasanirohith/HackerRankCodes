#include <iostream>
using namespace std;
int main()
{
	int n,k;
	
	int count=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j)
			{
			   if((a[i]+a[j])%k==0)
			   count++;	
			}
		}
	}
	count=count/2;
	cout<<count;
	
}
