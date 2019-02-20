#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
void fucn()
{
	char a[100];
	cin>>a;
	
	char orig[100];
	for(int j=0;j<100;j++)
	{
		orig[j]=a[j];
	}
	int x=strlen(a);
	//cout<<x;
	x--;
	int flag=0;
	int i=x;
	char o;
	int j=i-1;
	while(i>0)
	{
		
		if(a[i]>a[j])
		{
			o=a[i-1];
			a[i-1]=a[i];
			a[i]=o;
			flag=1;
			break;
		}
		else j--;
	}
	if(flag==1)
	{
	   cout<<a<<endl;
	}
	else
	cout<<"no answer"<<endl;
	
}
int main()
{
	long int n;
	cin>>n;
	for(long int i=0;i<n;i++)
	{
		fucn();
	}
}
