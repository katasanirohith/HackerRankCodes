#include<iostream>
using namespace std;
int fucn()
{
	int n;
	cin>>n;
	int temp=0;
	int rem=n%10;
	n=n/10;
	temp=n;
	int temp2=0;
		if(rem%5==0)
		{
			temp++;
			cout<<temp<<endl;
			return 0;
		}
		else if(rem<5)
		{
			if(rem%2==0)
			{
				temp2=rem/2;
				cout<<temp+temp2<<endl;
				return 0;
			}
			if(rem==1)
			{
				temp++;
				cout<<temp<<endl;
				return 0;
			}
			if(rem==3)
			{
				temp++;
				temp++;
				cout<<temp<<endl;
				return 0;
			}
		}
		else if(rem>5)
		{
		   temp++;
		   rem=rem-5;
		   if(rem%2==0)
			{
				temp2=rem/2;
				cout<<temp+temp2<<endl;
				return 0;
			}
			if(rem==1)
			{
				temp++;
				cout<<temp<<endl;
				return 0;
			}
			if(rem==3)
			{
				temp++;
				temp++;
				cout<<temp<<endl;
				return 0;
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
