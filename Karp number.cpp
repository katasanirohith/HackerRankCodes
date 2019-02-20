#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
void func(int a)
{
	int temp=a;
	int orig=a;
	int counter=0;
	while(a>0)
	{
		temp=a%10;
		//cout<<temp<<endl;
		a=a/10;
		counter++;
	}
	int origcounter=counter;
	int sqr=orig*orig;
	int ten=10;
	while(counter>1)
	{
		ten=ten*10;
		counter--;
	}
	int original=orig;
	int tempo=sqr;
	int sum=0;
	while(sqr>0)
	{
		tempo=sqr%ten;
		sum=sum+tempo;
		sqr=sqr/ten;
	}
	if(sum==original)
	cout<<original<<endl;
	
}
int main()
{
	int l,u;
	cin>>l>>u;
	for(int i=l;i<=u;i++)
	{
		func(i);
	}
	
}
