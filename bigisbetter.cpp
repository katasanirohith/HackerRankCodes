#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
void fucn()
{
	char a[100];
	cin>>a;
	unsigned long int ten=1;
	unsigned long int b[100];
	int x=strlen(a);
	for(int i=x;i>0;i--)
	{
		b[i]=(int(a[i]))-97;
		b[i]=b[i]*ten;
		ten=ten*10;
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
