#include<iostream>
#include<stdlib.h>
using namespace std;
void fucn()
{
	int n;
	int c;int m;
	cin>>n>>c>>m;
	int k=n/c;
	int count=k;
	while(k>=m)
	{
		k=k-m;
		k++;
		count++;
	}
	cout<<count<<endl;
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
