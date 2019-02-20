#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	cout<<INT_MAX;
	int n;
	cin>>n;
	int a[n];
	int min=INT_MAX;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int index=n;
	//cout<<n<<endl;
	int count=0;
	
	while(index>0)
	{
		cout<<index<<endl;
	min=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(min>a[i])
		{
		
		min=a[i];
		
		}
		
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==min)
		{
			index--;
			a[i]=INT_MAX;
		}
		else
		{
			a[i]=a[i]-min;
		}
	}
	
	}
	
}
