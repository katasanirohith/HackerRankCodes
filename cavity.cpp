#include <iostream>
using namespace std;
#define maxi 2147483647
unsigned long int n;
unsigned long int a[1000][1000];
void spi(char b[][maxi],unsigned long int n)
{
    unsigned long int i=0;
    unsigned long int j=n-1;
    char temp[maxi][n];
    for(unsigned long int i=0;i<n;i++)
    temp[maxi][i]=b[maxi][i];
    //int temp;
    unsigned long int counter=0;
    char tempo;
    unsigned long int flag=0;
    unsigned long int orign=n-1;
    while(n>0)
    {
        if(flag==0)
        {
        tempo=temp[maxi][counter];
        flag=1;
        }
        a[i][j]=tempo%10;
        //cout<<i<<" "<<j<< " "<<a[i][j]<<" "<<endl;
        tempo=tempo/10;
        j--;
        if(tempo<=0)
        {
            //cout<<endl<<"came"<<endl;
            counter++;
            j=orign;
            i++;
            n--;
            flag=0;
        }
    }
}
int main()
{
    
    cin>>n;
    //int a[n][n];
    char b[maxi][maxi];
    //int j=0;
    for(unsigned long int i=0;i<n;i++)
    {
    cin>>b[maxi][i];
    }
    spi(b,n);
    unsigned long int orig=a[n-1][n-1];
    
    for(unsigned long int i=0;i<n;i++)
    {
        for(unsigned long int j=0;j<n;j++)
        {
            if(i!=0 &&j!=0 &&i!=n &&j!=n)
            {
                if(a[i+1][j]<a[i][j]&&a[i][j+1]<a[i][j]&&a[i-1][j]<a[i][j]&&a[i][j-1]<a[i][j])
                a[i][j]=maxi;
            }
        }
    }
    //cout<<a[n][n]<<endl;
    //cout<<a[1][1]<<endl;
    
    for(unsigned long int i=0;i<n;i++)
    {
        for(unsigned long int j=0;j<n;j++)
        {
            //cout<<endl<<orig<<endl;
            
            if(a[i][j]!=maxi)
            cout<<a[i][j];
            else if(i==n-1&&j==n-1)
            cout<<orig;
            else if(i!=n-1&&j!=n-1)
            cout<<"X";
        }
        cout<<endl;
    }
}
