#include <iostream>
using namespace std;
#include<stdlib.h>
#include <string.h>
#include <cmath>
int main()
{
	char a[100];
	cin>>n;
	cin>>a;
	int count=0;
	int temp;
	int x=strlen(a);
	int nflag=0,cflag=0,sflag=0,spflag=0;
	for(int i=0;a[i]!='\0';i++)
	{
		temp= (int) a[i];
		if(temp>=48 &&temp <=57)
		nflag=1;
		else if(temp>=65 && temp<=90)
		cflag=1;
		else if(temp>=97 && temp <=122)
		sflag=1;
		else
		spflag=1;
	}
	int tempo=0;
	if(x<6)
	{
		if(nflag==0)
		count++;
		if(cflag==0)
		count++;
		if(sflag==0)
		count++;
		if(spflag==0)
		count++;
		if(count+x<6)
		tempo=6-(count+x);
		count=count+tempo;#$#	
	}
	else
	{
		if(nflag==0)
		count++;
		if(cflag==0)
		count++;
		if(sflag==0)
		count++;
		if(spflag==0)
		count++;
	}
	cout<<count;
	
}
