#include <iostream>
using namespace std;
 int main()
{
	long int b;
	long int nk;
	long int nu;
	long int sum=0;
	long int sarr[1000];
	long int counter=0;
	long int flag=0;
	cin>>b>>nk>>nu;
	long int k[nk];
	long int u[nu];
	for(int i=0;i<nk;i++)
	cin>>k[i];
	for(int i=0;i<nu;i++)
	cin>>u[i];
	for(int i=0;i<nk;i++)
	{
		for(int j=0;j<nu;j++)
		{
			if(k[i]+u[j]<b)
			{
				sarr[counter]=k[i]+u[j];
				
				counter++;
				flag=1;
			}
			
		}
	}
	int max=-111;
	for(int i=0;i<counter;i++)
	{
		if(max<sarr[i])
		max=sarr[i];
	}
	if(flag==1)
	cout<<max;
	else 
	cout<<"-1";
}
