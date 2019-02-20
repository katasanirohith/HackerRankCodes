# include<iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
struct node
{
	int num;
	int flag;
};
int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	node a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i].num;
		a[i].flag=0;
	}
	int min=0;
	int index;
	int lo=0;
	node temp;
	while(k>0)
	{
		min=0;
		for(int i=0;i<n;i++)
		{
			if(min<a[i].num&&a[i].flag==0)
			{
				min=a[i].num;
				index=i;
			}
		}
		a[index].flag=1;
		temp=a[lo];
		a[lo]=a[index];
		a[index]=temp;
		lo++;
		k--;
		
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i].num<<" ";
	}
	
}
