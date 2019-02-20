#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char a[1000000];
	int count=0;
	int stream=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]=='U')
		{
			stream++;
		}
		else
		stream--;
		if(stream==0)
		count++;
	}
	cout<<count;
}
