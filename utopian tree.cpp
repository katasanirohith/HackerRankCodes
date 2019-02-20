#include <iostream>
using namespace std;
int growth(int n)
{
	if(n==0)
	{
		cout<<"1"<<endl;
		return 0;
	}
	if(n==1)
	{
		cout<<"2"<<endl;
		return 0;
	}
	int o=1;
	int count=0;
	while(n>0)
	{
		count++;
		if(count%2!=1)
		o=o+1;
		else
		o=o*2;
		n--;
		
	}
	cout<<o<<endl;
}
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
	for(int i=0;i<n;i++)
	growth(a[i]);
}
