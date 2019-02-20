#include <iostream>
using namespace std;
#include <string.h>
#include <stdlib.h>
int main()
{
	char a[100000];
	cin>>a;
	int count=0;
	int temp;
	for(int i=0;a[i]!='\0';i++)
	{
		temp=(int) a[i];
		if(temp>=65 && temp <=90)
		count++;
	}
	cout<<count+1;
}
