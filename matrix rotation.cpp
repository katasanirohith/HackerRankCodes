#include <iostream>
using namespace std;
int main()
{
	int m,n,r;
	cin>>m>>n>>r;
	int a[m][n];
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
		int fla=0,fla2=0;
	int no=min(m,n);
	no=no/2;
	int i=1,j=1;
	int orgm=m,orgn=n;
	int number=r*no;
	int count1=1,count2=1;
	int orgno=no;
	while(r>0)
	{
		
		swap(a[count1][count2],a[i][j]);
		cout<<endl<<i<<" "<<j<<" "<<count1<<" "<<count2<<" "<<a[count1][count2]<<" "<<fla<<" "<<fla2<<endl;
		for(int opo=1;opo<=orgm;opo++)
	{

		for(int opp=1;opp<=orgn;opp++)
		{
			cout<<a[opo][opp]<<" ";
		}
		cout<<endl;
}
		
		if(i<m && j<=n && fla==0)
		{
			cout<<" bush "<<endl;
			i++;
		}
		else if(j<n && i<=m && fla2==0)
		{
			j++;
			fla=1;
		}
		else if(i<=m && j==n && i>1)
		{
			i--;
			fla2=1;
		}
		else if(j>1)
		{
			j--;
		
		}
		else
		{
			cout<<endl<<" uyyyyyyyyyyyyyyyyyyyyy"<<endl;
			i=1;
			j=1;
			fla=0;
			fla2=0;
			r--;
			number--;
			if(r==0&&number>0)
			{
				
			   count1++;
			   count2++;
			   m--;
			   n--;
			   i=count1;
			   j=count2;
			   r=orgno;
			   
			}
		}
			
		
	}
	for(int i=1;i<=orgm;i++)
	{

		for(int j=1;j<=orgn;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
}
	/*int firstElement;
	while(no>1)
	{
		
	}*/
		
}
