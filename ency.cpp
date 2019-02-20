#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cmath>
using namespace std;
int main()
{
	char a[100];
	cin>>a;
	int x=strlen(a);
	int l=sqrt(x);
	int h=l+1;
	int count=0;
	int i=0,j=0;
	int basic=0;
	while(count<x)
	{
		if(i<x)
		{
		cout<<a[i];
		i=i+h;
		count++;
		}
		else
		{
			cout<<" ";
			basic++;
			i=basic;
		}
	}
	
}
