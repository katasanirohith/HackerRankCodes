#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
	char a[10000];
	char b[10000];
	cin>>a;
	int z=strlen(a);
	cin>>b;
	int x=strlen(b);
	int n;
	int counter=0;
	int c=z;
	int count1=0;
	int k=x;
	int flag=0,flag1=0;
	int bla;
	cin>>bla;
	for(int i=0;i<z+x;i++)
	{
		if(c!=0 || k!=0)
		{
			if(flag==0)
			{
			if(a[i]==b[i])
			{
				c--;
				k--;
			}
			else
			flag1=1;
		     }
		     if(flag1==1)
		     {
			 
			 if(k!=0&&c!=0)
			{
				count1++;
				count1++;
				c--;
				k--;
				flag=1;
			}
			else if(k!=0)
			{
			count1++;
			k--;
			flag=1;
			}
			else if(c!=0)
			{
			count1++;
			c--;
			flag=1;
		}
		
			
		}
	}
	}
	//cout<<count1<<endl;
	if(count1>bla)
	cout<<"No";
	else
	cout<<"Yes";
	
}
