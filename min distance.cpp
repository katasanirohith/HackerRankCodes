#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int dist[n];
	int count=0;
	int flag=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j)
			{
				if(a[i]==a[j])
				{
					if(j-i>0)
					{
		
					dist[count]=j-i;
					count++;
					flag=1;
				}
				}
			}
		}
	}
	int min=999999;
	for(int i=0;i<count;i++)
	{
		if(min>dist[i])
		min=dist[i];
	}
	if(flag==1)
	cout<<min;
	else cout<<"-1";
}
