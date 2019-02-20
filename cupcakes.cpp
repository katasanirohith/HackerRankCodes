#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	
	cin>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int x=sizeof(a)/sizeof(a[0]);
	sort(a,a+x);
	for(int i=0;i<n;i++)
	{
		b[i]=a[n-1-i];
		//cout<<b[i]<<" ";
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+(b[i]*pow(2,i));
	}
	cout<<sum;
	
}
