#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
	unsigned long int ans,k;
	char a[10000];
	cin>>a>>k;
	int x=strlen(a);
	int count=0;
	int temp;
	if(x>k)
	{
		for(int i=0;i<k;i++)
	{
		if((int)a[i]==97)
		count++;
	}
	ans=count;	
	}
	else
	{
	for(int i=0;i<x;i++)
	{
		if((int)a[i]==97)
		count++;
	}
	if(k%x==0)
	{
		k=k/x;
		ans=k*count;
	}
	else
	{
		temp=k%x;
		k=k/x;
		ans=k*count;
		temp--;
		//cout<<temp;
		count=0;
		while(temp>=0)
		{
			
			if((int)a[temp]==97)
			count++;
			
			temp--;
		}
		ans=ans+count;
	}
	}
	cout<<ans;
}
