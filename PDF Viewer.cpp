#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
	int b[26];
	int max=0;
	for(int i=0;i<26;i++)
	{
		cin>>b[i];
	}
	char a[100];
	cin>>a;
	int index;
	int x=strlen(a);
	for(int i=0;i<x;i++)
	{
		index=a[i]-97;
		if(max<b[index])
		max=b[index];
	}
	cout<<x*max;
}
