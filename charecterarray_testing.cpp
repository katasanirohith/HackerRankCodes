# include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char b[1000][1000];
	for(int i=0;i<n;i++)
	cin>>b[1000][i];
	cout<<"\n****\n";
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	{
	cout<<b[i][j];
}
cout<<endl;
}	
	
	
}
