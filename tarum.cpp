#include <iostream>
using namespace std;
void fun()
{
	int b,w,bc,wc,c;
	cin>>b>>w>>bc>>wc>>c;
	int c1,c2,c3,c4;
	c1=b*bc;
	c2=b*c+b*wc;
	c3=w*wc;
	c4=w*c+w*bc;
	int temp1,temp2;
	if(c1<c2)
	temp1=c1;
	else 
	temp1=c2;
	if(c3<c4)
	temp2=c3;
	else 
	temp2=c4;
	
	
	cout<<temp1+temp2;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		fun();
	}
}
