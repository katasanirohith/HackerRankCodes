#include <iostream>
#include<stdlib.h>
#include <iomanip>
using namespace std;
int main()
{
	long int n;
	cin>>n;
	long int a[n];
	int count1=0,count2=0,count3=0;
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	if(a[i]<0)
	count1++;
	else if(a[i]>0)
	count2++;
	else
	count3++;
}
//cout<<count2<<n<<endl;
double t=float(count2*1.0/n*1.0);
double f=float(count1*1.0/n*1.0);
double bla=float(count3*1.0/n*1.0);
//cout<<t<<endl;
cout<<std::fixed;
	cout<<std::setprecision(6)<<t;
	cout<<std::setprecision(6)<<f;
	cout<<std::setprecision(6)<<bla;
}
