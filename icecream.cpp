#include<iostream>
using namespace std;
struct num{
	int number;
	int flag;
};
void fucn()
{
	int m;
	cin>>m;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		if(i!=j)
		{
			if(a[i]+a[j]==m)
			{
				cout<<i+1<<" "<<j+1<<endl;
				break;
			}
		}
	}
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
