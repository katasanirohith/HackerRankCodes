#include <iostream>
using namespace std;
void fucn()
{
	int n;
	int c;
	int k;
	int count=0;
	cin>>n>>c>>k;
	count=k;
	int temp=c%n;
	cout<<temp+k-1<<endl;
	
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
