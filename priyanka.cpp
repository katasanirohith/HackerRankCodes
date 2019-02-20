#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct priya
{
   unsigned long int number;
    int flag;    
};
int main()
{
    unsigned long int n,temp;
    cin>>n;
    priya p[n];int count=0;
    for(unsigned long int i=0;i<n;i++)
    {
        cin>>p[i].number;
        p[i].flag=0;
    }
    for(unsigned long int i=0;i<n;i++)
    {
        if(p[i].flag==0)
        {
            p[i].flag=1;
            temp=p[i].number;
            for(unsigned long int j=0;j<n;j++)
            {
                if(p[j].number>=temp && p[j].number<=temp+4)
                {
                    p[j].flag=1;
                    cout<<p[j].number<<" ";
                }
            }
            cout<<endl;
            count++;
        }
    }
    cout<<count;
}
