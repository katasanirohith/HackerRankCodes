#include <iostream>
using namespace std;
int main()
{
	long int n;
	cin>>n;
	long int temp=2;
	long int sum=2;
	if(n==1)
	{
		cout<<"2";
		return 0;
	}
	if(n==2)
	{
		cout<<"5";
		return 0;
	}
	while(n>1)
	{
		temp=temp*3;
		temp=temp/2;
		sum=sum+temp;
		n--;
	}
	cout<<sum;
}
