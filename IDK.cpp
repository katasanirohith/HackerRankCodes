#include <iostream>
using namespace std;
int main()
{
	int n;
	int k;
	cin>>n>>k;
	int a[n];
	int total=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		total=total+a[i];
	}
	int pg=1;
	int i=0;
	int chap;
	while(total>0)
	{
		chap=a[i];
		chap=chap-k;
		pg++;
		if(chap<=0)
		{
		i++;
		pg++;
		}
	}
}

