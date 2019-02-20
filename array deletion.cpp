#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[1000];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<1000;i++)
	b[i]=0;
	for(int i=0;i<n;i++)
	{
		b[a[i]]++;
	}
	int min=0;
	int index;
	for(int i=0;i<1000;i++)
	{
		if(min<b[i])
		{
			min=b[i];
			index=i;
		}
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(index==a[i])
		count++;
	}
	if(count!=0)
	cout<<n-count;
	else
	cout<<"NOT POSSIBLE";
	
}
