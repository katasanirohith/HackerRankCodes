#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
		int count=1,counter=n,bla=0;
	while(counter>0)
	{

	for(int i=1;i<=n;i++)
	{
		if(a[i]==count)
		{
			for(int j=1;j<=n;j++)
			{
				if(i==a[j])
				{
				b[bla]=j;
				bla++;
				}
			}
		}
		
	}
	counter--;
	count++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	
}
