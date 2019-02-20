# include <iostream>
#include <stdlib.h>
using namespace std;
void fucn()
{
	int n,k;
	cin>>n>>k;
	int count=0;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<=0)
		count++;
	}
	if(count<k)
	cout<<"YES"<<endl;
	else 
	cout<<"NO"<<endl;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		fucn();
	}
}
