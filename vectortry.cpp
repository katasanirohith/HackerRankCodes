#include<iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	int x;
	vector <int> v;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
