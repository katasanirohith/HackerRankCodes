#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include <string.h>
using namespace std;
int main()
{
	char a[100]="1";
	int n;
	cin>>n;
	int x=atoi(a);
	for(int i=0;i<n;i++)
	{
		(char*) a=(char*) (atoi(a)*(atoi(a)+1));
	}
	cout<<a;
}
