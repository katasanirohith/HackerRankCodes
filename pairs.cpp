#include <iostream>
using namespace std;
int main()
{
	unsigned int n;
	cin>>n;
	unsigned int k;
	cin>>k;
	int a[n];
	for(unsigned long int i=0;i<n;i++)
	cin>>a[i];
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j)
			{
				if(a[i]-a[j]==k)
				{
					count++;
				}
			}
		}
	}
	cout<<count;
}
