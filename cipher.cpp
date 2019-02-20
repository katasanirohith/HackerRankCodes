#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
	char a[10000];
	char b[10000];
	int k;
	cin>>a>>k;
	int x=strlen(a);
	int temp;
	for(int i=0;a[i]!='\0';i++)
	{
		//cout<<"bla"<<endl;
		temp=(int)a[i];
		
		if(temp>=65 && temp<=90)
		{
			if(temp+k<=90)
			{
				temp=temp+k;
				b[i]=(char)temp;
			}
		
		else
		{
			k=k%26;
			if(temp+k>90)
			{
				temp=90-temp-k;
				temp=-1*temp;
				temp=temp+64;
				//cout<<temp<<endl;
			}
			else 
			{
				temp=temp+k;	
			}
			b[i]=(char)temp;
		}
		}
		else if(temp>=97 && temp<=122)
		{
			if(temp+k<=122)
			{
				temp=temp+k;
				b[i]=(char)temp;
			}
		
		else
		{
			k=k%26;
			if(temp+k>122)
			{
				temp=122-temp-k;
				temp=-1*temp;
				temp=temp+96;
				//cout<<temp<<endl;
			}
			else 
			{
				temp=temp+k;	
			}
			b[i]=(char)temp;
		}
		}
		else b[i]=a[i];
	}
	for(int i=0;i<x;i++)
	{
		cout<<b[i];
	}	
}
