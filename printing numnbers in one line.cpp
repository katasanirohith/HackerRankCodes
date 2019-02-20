#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int no;
	cin>>no;
	int n;
	
	int a[10000];
	int orig;
	int counter=0;
	int temp;
	while(no>0)
	{
		cin>>n;
		orig=n;
	counter=0;
	while(n>0)
	{
		temp=n%10;
		if(temp!=0)
		a[counter]=temp;
		//cout<<n%10<<endl;
		n=n/10;
		if(temp!=0)
		counter++;
	}
	int count=0;
	//int a[counter];
     for(int i=0;i<counter;i++)
     {
     	if(orig%a[i]==0)
     	count++;
	 }
	 cout<<count<<endl;
	 no--;
}
}
