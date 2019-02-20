#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
void fucn()
{
	char a[1000];
	int c[1000];
	char b[1000];
	int d[1000];
	cin>>a;
	int flag=0;
	int x=strlen(a);
	for(int i=1;i<=x;i++)
	{
		b[i-1]=a[x-i];
		//cout<<b[i-1]<<i<<endl;
	}
	
	
	for(int i=0;a[i]!='\0';i++)
	{
		c[i]=(int)a[i];
		d[i]=(int)b[i];
	}
	for(int i=0;i<x;i++)
	{
		if(i+1<x)
		{
			//cout<<c[i]-c[i+1]<<" "<<d[i]-d[i+1]<<" "<<i<<endl;
		if(c[i]-c[i+1]!=d[i]-d[i+1] && c[i]-c[i+1]!=-1*(d[i]-d[i+1]))
		{
		//	cout<<c[i]<<endl;
		//	cout<<c[i+1]<<endl;
		//	cout<<c[i]-c[i+1]<<" "<<d[i]-d[i+1]<<" "<<i<<endl;
			flag=1;
		}
		}
	}
	if(flag==0)
	cout<<"Funny"<<endl;
	else
	cout<<"Not Funny"<<endl;
	
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	fucn();
	
}
