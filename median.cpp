#include <iostream>
#include <bits/stdc++.h>
//#include <algorithms.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	//cin>>a;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int x= sizeof(a)/sizeof(a[0]);
	sort(a,a+n);
	cout<<a[n/2];
	
}
