#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int x= sizeof(a)/sizeof(a[0]);
	sort(a,a+n);
	//cout<<a[n/2];
	cout<<a[0]<<" "<<a[1]<<" ";
	int diff=a[1]-a[0];
	for(int i=1;i<n;i++)
	{
		if(i+1<=n)
		{
		if(a[i+1]-a[i]==diff)
		{
			cout<<a[i]<<" "<<a[i+1]<<" ";
		}
		else
		break;
	}
	}
	
}
