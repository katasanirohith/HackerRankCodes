#include<iostream>
using namespace std;
int main()
{
	int x1,v1,x2,v2;
	cout<<"Enter x1,v1,x2,v2";
	cin>>x1>>v1>>x2>>v2;
	int temp;
	int flag=0;
	if(x1>x2)
	{
		temp=x1;
		x1=x2;
		x2=temp;
	}
	int a[1000];
	int b[1000];
	int sum1=x1;
	int sum2=x2;
	a[0]=x1;
	b[0]=x2;
	int count1=0,count2=0;
	for(int i=1;i<1000;i++)
	{
		sum1=sum1+v1;
		a[i]=sum1;
	     
		sum2=sum2+v2;
		b[i]=sum2;
		count1++;
		
		if(a[i]==b[i])
		flag=1;
		
	}
	
	
	
	if(flag==1)
	cout<<"Yes";
	else
	cout<<"No";
}
