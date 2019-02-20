#include<iostream>
using namespace std;
int main()
{
	int l,h,k;
	int a[h-l+1];
	a[0]=l;
	int temp=a[0];
	for(int i=1;i<(h-l+1);i++)
	{
		temp=temp+1;
		a[i]=temp;
	}
}
