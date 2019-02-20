#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;
int main()
{
	int n,d;
	cin>>n>>d;
	int a[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	for(int i=0;i<n;i++)
	{
		
		//if(i+1<=n)
		//{
		for(int k=i+1;k<n;k++)
			{
			
			if(a[k]-a[i]==d)
				{
					//cout<<"bla"<<endl;
					for(int j=k+1;j<n;j++)
					{
						
						
							if(a[j]-a[k]==d)
							{
								//cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<" "<<endl;
								count++;
							}
						
					}
				}
			}
		//}
	}
	cout<<count;
}
